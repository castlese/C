/*This program compares two files and tells the user if they are identical or not
* New Learning Points: 	*using argc and arg[v] and sscanf to read in file names
						*use malloc for fname1 and fname2
* Author: Emily Castles & Dr. Peter Cahill (from notes)
* Last Modified: 7th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 100;

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char fname1[LEN];
	char fname2[LEN];
	char ca, cb;
	
	sscanf(argv[1], "%s", &fname1);
	sscanf(argv[2], "%s", &fname2);

	fp1 = fopen(fname1, "r");
	fp2 = fopen(fname2, "r");

	if (fp1 == NULL)
	{
		printf("Cannot open %s for reading\n", fname1);
		exit(0);
	}

	else if (fp2 == NULL)
	{	
		printf("Cannot open %s for reading\n", fname2);
		exit(0);
	}

	else
	{
		ca = getc(fp1);
		cb = getc(fp2);
		
		while (ca != EOF && cb != EOF && ca == cb)
		{
			ca = getc(fp1);
			cb = getc(fp2);
		}
		
		if (ca == cb)
			printf("Files are identical \n");
		else if (ca != cb)
			printf("Files are different \n");
			
			
		
	}
	fclose (fp1);
	fclose (fp2);
	return 0;	
}
	

	


