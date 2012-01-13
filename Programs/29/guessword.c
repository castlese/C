/*This program reads a word from a text file and then gives the user 3 chances to guess the word
* New Learning Points: 	*Opening a file for reading (fopen("filename.ext", "r"));
						*Checking if the file is available for opening (fp == NULL); exit(0)
						*Using fgets(variable, length, filename) to read the string in the file into a variable, instead of stdin previously;
* Alternative Methods:	*use an array instead of pointer variable for guess and word
						*don't read the word in from a file - put it in the program itself
* Author: Emily Castles
* Last Modified: 1st December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 100;

int main(void)
{
	FILE *fp;	/*declares pointer variable for reading external file. 
				*FILE is the tag name of a special data structure used by C for storing info about a file. 
				*This is part of the stdio.h header */
				
	char *guess, *word;
	int gcount, c;
	guess = (char*) malloc(LEN);
	word = (char*) malloc(LEN);

	fp = fopen( "words.txt", "r" ); /* open for reading */
	
	if ( fp == NULL )/*check that file can be opened, if not, exit program with message*/
		{
			printf("Cannot open file for reading\n");
			exit(0);
		}
	
	fgets(word, LEN, fp);
	fclose(fp);

	for (gcount = 0; gcount < 3 && strcmp(word, guess) != 0; gcount++)
	{
		printf("Guess the word!\n");
		scanf("%99s", guess);
						
		if (strcmp(word, guess) == 0)
		{
			printf("Correct guess - well done\n");
		}
		
		else
		{
			printf("Sorry %s is not the secret word\n");
		}
	}
	
	if (strcmp (word, guess) != 0)
	{	
		printf("Game Over. You have used your three chances.");
	}
	
	free(guess);
	free(word);

return 0;

}