/*This program displays 20 lines at a time using Q to quit or Return to display the next 20 lines
* New Learning Points: 	*Reiteration of scanf reading in '\n'. Overcome this using gets(userinput)
						*where userinput was an array;(see line 52);
* Alternative Methods:	*TODO: Is there another way to approach this, possibly using getchar x2???
						*read filename on execution (argc argv), or enter filename into program
						*put in a function at the end that recognises the EOF and prints a message to tell user that end has been reached
* Author: Emily Castles & Dr. Peter Cahill (from notes)
* Last Modified: 7th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 100;

int main(void)
{
FILE *fp;
char filename[LEN];
char c;
char userinput[2];
int lines, wcount;


printf("Enter file name:");
fgets(filename, LEN, stdin);
	for(wcount=0; filename[wcount] != '\n'; wcount++) /*for loop to find the end of the word (based on carraige return \n) and then set end of word to \0*/
			{
			
			
			}
			filename[wcount] = '\0';

if ( (fp = fopen( filename, "r" )) == NULL )/*check that file can be opened, if not, exit program with message*/
	{
		printf("Cannot open %s file for reading\n", filename);
		exit(0);
	}
	
c = getc(fp);/*reading first character from file*/
lines = 0;

while (c != EOF && (userinput[0] != 'q' || userinput[0] != 'Q' || userinput[0] == '\n'))
{
	printf("%c", c);/*print next character in file*/
		if (c == '\n')/* line count */
			{
			lines++;
			}
		if (lines == 20)/*if line count is 20, ask user for input - Q to quit, return to print another 20 lines */
			{
			lines = 0;
			printf("Press Q to quit or hit return to show more data:\n");
			gets(userinput);/*scans user input to character array*/
							
				if (userinput[0] == 'q' || userinput[0] == 'Q')/*quit program */
					{
						exit(0);
					}
				
			}			
	c=getc(fp);
		
}


return 0;	
}
	

	


