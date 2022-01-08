/*
 * mgxfix v0.4 - fixes invalid header length in aoe2 recorded games
 *
 * Copyright (c) 2009-2010, biegleux <biegleux@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses>.
 */

#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>
#include <windows.h>
#include "mgxfix.h"
#include "zlib-1.2.3/zlib.h"
#include <string>
using namespace std;


void usage(char const *argv0)
{
	fprintf(stdout,
			"Usage: %s -f filename | -h\n"
			"\t-f filename -- specifies the recorded game to fix\n"
			"\t-h -- prints this text\n\n"
			"%s fixes invalid header length in aoe2 recorded games\n"
			"%s v%s, copyright(c) 2009-2010 biegleux\n", argv0, argv0, argv0, VERSION);
	exit(EXIT_SUCCESS);
}
 
char* ExtractFileExt(char* FileName)
{
	std::string s = FileName;
	int Len = s.length();
	while (TRUE)
	{
		if (FileName[Len] != '.')
			Len--;
		else
		{
			char* Ext = new char[s.length() - Len + 1];
			for (int a = 0; a < s.length() - Len; a++)
				Ext[a] = tolower(FileName[s.length() - (s.length() - Len) + a]);
			Ext[s.length() - Len] = '\0';
			return Ext;
		}
	}
}
std::string ExePath_s() {
	char buffer[260];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	std::string s(buffer);
	std::string::size_type pos = s.find_last_of("\\/");
	//string last = std::string(s).substr(0, pos);
	return std::string(s).substr(0, pos);
}



int fixrecordGame(const char* filename)//main(int argc, char *argv[])
{
	int c, code;
	//char *filename = NULL;	/* recorded game to fix */
	unsigned int header_len = 0;
	FILE *fp;
	char *buf = NULL;
	z_stream d_stream;	/* decompression stream */
	long file_size = 0;	/* file size */
	unsigned int min_len = 0;	/*minimal header length */
	unsigned int max_len = 0;	/*maximal header length */
	int is_mgx = 1;

	Byte *garbage;	/* buffer for uncompressed data */
	uLong garbage_len = 10000*sizeof(int);

	HANDLE hFile = NULL;
	FILETIME ftWrite = {0, 0};

	//while ((c = getopt(argc, argv, "f:h")) != -1)
	//{
	//	switch (c)
	//	{
	//		case 'f':
	//			filename = optarg;
	//			break;
	//		case 'h':
	//		case '?':
	//		default:
	//			usage(argv[0]);
	//			break;
	//	}
	//}

	/* Check the validity of the command line */
	//if (filename == NULL)
	//{
	//	usage(argv[0]);
	//}

	is_mgx = !stricmp (strrchr(filename, '.') + 1, MGX_EXT);

	if ((hFile = CreateFile(filename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL, NULL)) != INVALID_HANDLE_VALUE)
	{
		if (!GetFileTime(hFile, NULL, NULL, &ftWrite))
		;
		CloseHandle(hFile);
	}

	/* open the input file */
	if ((fp = fopen(filename, "rb+")) == NULL)
	{
		printf("Error opening file\n");
		return EXIT_FAILURE;
	}

	/* get the file size */
	fseek(fp, 0, SEEK_END);
	file_size = ftell(fp);
	rewind(fp);

	/* read header_len information */
	if (fread(&header_len, sizeof(header_len), 1, fp) != 1)
	{
		printf("Error reading header_len bytes\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	/* check the header_len value */
	if (header_len != 0)
	{
		printf( "File seems to be OK (header_len is not zero)\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	/* skip next_pos */
	if (is_mgx)
		fseek(fp, 4, SEEK_CUR);

	max_len = MIN(MAX_HEADER_LEN + 1, file_size - (is_mgx ? 8 : 4));

	/* allocate buffer for the header stream */
	if ((buf = (char*)malloc(sizeof(char)*max_len)) == NULL)
	{
		printf( "Failed to allocate the memory\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	/* read the header stream */
	if (fread(buf, 1, max_len, fp) != max_len)
	{
		printf("Error reading header stream\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	garbage = (Byte*)calloc((uInt)garbage_len, 1);

	/* find the valid header length using binary search */
	printf("Getting the valid header length...\n");

	while (1)
	{
		header_len = (min_len + max_len) / 2;

		/* prepare d_stream structure */
		d_stream.zalloc = (alloc_func)Z_NULL;
		d_stream.zfree = (free_func)Z_NULL;
		d_stream.opaque = (voidpf)Z_NULL;
		//cehck the impact if we remove this
		//d_stream.next_in = buf;
		d_stream.avail_in = header_len;

		/* initialize the internal stream state for decompression, we need to use raw inflate */
		if ((code = inflateInit2(&d_stream, -MAX_WBITS)) != Z_OK)
		{
		    printf( "Error initializing stream for decompression\n");
			fclose(fp);
			free(buf);
			free(garbage);
			return EXIT_FAILURE;
		}

		for (;;)
		{
			d_stream.next_out = garbage;
			d_stream.avail_out = (uInt)garbage_len;
			if ((code = inflate(&d_stream, Z_NO_FLUSH)) != Z_OK)
				break;
		}

		/* deallocate the decompression state */
		if (inflateEnd(&d_stream) != Z_OK)
			;

		switch (code)
		{
			case Z_STREAM_END:
				max_len = header_len;
				break;
			case Z_BUF_ERROR:
			default:
				min_len = header_len + 1;
				break;
		}

		if (min_len == max_len)
		{
			header_len = min_len = max_len;
			break;
		}
	}

	/* deallocate resources */
	free(buf);
	free(garbage);

	if (header_len > MAX_HEADER_LEN)
	{
		printf( "Unable to find the valid header length\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	printf( "Header length found (%x), writing to the file...\n", header_len);
	header_len += (is_mgx ? 8 : 4);
	rewind(fp);

	if (fwrite(&header_len, sizeof(header_len), 1, fp) != 1)
	{
		printf( "Unable to write file\n");
		fclose(fp);
		return EXIT_FAILURE;
	}

	fclose(fp);

	if ((hFile = CreateFile(filename, GENERIC_WRITE, 0, NULL, OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL, NULL)) != INVALID_HANDLE_VALUE)
	{
		if (ftWrite.dwLowDateTime != 0 && ftWrite.dwHighDateTime !=0)
			SetFileTime(hFile, NULL, NULL, &ftWrite);
		CloseHandle(hFile);
	}

	 printf(  "Done!\n");
 
	return EXIT_SUCCESS;
}
void recordFileName()//const char* path) 
{
	int count = 0;
	string s = ExePath_s();
	std::string s2 = "\\Age2_x1";
	int i = s.find(s2);
	if (i != std::string::npos)
		s.erase(i, s2.length());
	string pathSave = string(s);
	const char* path = s.append("\\SaveGame\\*").c_str();

	WIN32_FIND_DATA data;
	HANDLE hFind = FindFirstFile(path, &data);      // DIRECTORY
	if (hFind != INVALID_HANDLE_VALUE) {
		do {
			char* Ext = ExtractFileExt(data.cFileName);
			if (strcmp(Ext, ".mgl") == 0)
			{
				const char* file = string(pathSave).append("\\SaveGame\\").append(data.cFileName).c_str();
				printf("%s\n",file);
				fixrecordGame(file);
			}
			if (strcmp(Ext, ".mgx") == 0)
			{
				const char* file = string(pathSave).append("\\SaveGame\\").append(data.cFileName).c_str();
				printf("%s\n", file);
				fixrecordGame(file);
			}
		} while (FindNextFile(hFind, &data));
		FindClose(hFind);
	}
}
