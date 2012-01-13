/*This program copies text from an input file to an output file. 
* New Learning Points: 	*using one 'if' statements to combine opening of file and checking to see that file has been opened appropriately;
						*using putc() to write to another file;
						*using "r" for reading and file and "w" for writing to a file;
						*new file created for output if the file of the specified name (i.e. outputfile.txt) does not already exist - careful of overwriting
* Alternative Methods:	*prompt the user for file name and scan input
* Author: Emily Castles
* Last Modified: 1st December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 100;

int main(int argc, char *argv[])

{
FILE *fin, *fout;
char fnamein[LEN];
char fnameout[LEN];	
sscanf(argv[1], "%s", &fnamein);
sscanf(argv[2], "%s", &fnameout);
int c;
	
	if ( (fin = fopen( fnamein, "r" )) == NULL )/*check that file can be opened, if not, exit program with message*/
	{
		printf("Cannot open %s file for reading\n");
		exit(0);
	}
	
	else if ( (fout = fopen ( fnameout, "w")) == NULL)
	{
		printf("Cannot open %s file for writing\n");
		exit(0);
	}
	
	else
	{
		c = getc (fin); 
		while ( c != EOF)/* TODO tried combining the above c=getc(fin) statement with this while statement
							*as per notes but the output file was incorrect - why??*/
		{
			putc(c, fout);
			c=getc(fin);
		}
	}	
	
	fclose(fin);
	fclose(fout);
	
	printf("Files successfully copied\n");
	
	return 0;

}