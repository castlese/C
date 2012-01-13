/*This program copies a file using fread(), fwrite(), the second main function and checks for errors
*Solution
	*use second main to allow user input of source and destination file
	*read source and destination file names from argv[]
	*open source file "rb" (error check)
	*read binary data to a pointer using fread()
	*open destination file "wb" (error check)
	*write binary data from the pointer to a file using fwrite()
	*close source and destination files
* New Learning Points: 	*using fread() and f(write)
						*TODO: How do I know the size of the data input file so a)all data is read and b)all data as written with no extras. 
								Not recognising end of file
* Author: Emily Castles
* Last Modified: 8th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 100;

int main(int argc, char *argv[])
{
	FILE *in, *out;
	char sourcefile[LEN];
	char destfile[LEN];
	char data[200];/*maximum size of file is 200 bytes*/


	sscanf(argv[1], "%s", &sourcefile);/*read in file names */
	sscanf(argv[2], "%s", &destfile);

	in = fopen(sourcefile, "rb");/*pointer for input file*/

	if (in == NULL)/*error check*/
	{
		printf("Cannot open file %s for reading", sourcefile);
		exit(0);
	}


	fread(data, sizeof(char), sizeof(data), in);/*read input file to data*/

	out = fopen(destfile, "wb");

	if (out == NULL)/*error check - is this necessary since the out file is created if there is no file there*/
	{
		printf("Cannot open file %s to write to", destfile);
		exit(0);
	}

	fwrite(data, sizeof(char), sizeof(data), out);/*write data to output file - writes the input file and garbage after up to 200 bytes*/
	printf("File copied successfully");

	fclose(in);
	fclose(out);
		

	return 0;
}