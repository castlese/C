/*This program reads a word from a list in a text file and then gives the user 3 chances to guess the word
* Once the user guesses correctly the program moves onto the next word on the list
* New Learning Points: 	*Opening a file for reading (fopen("filename.ext", "r"));
						*Checking if the file is available for opening (fp == NULL); exit(0)
						*Using fgets(variable, length, filename) to read the string in the file into a variable;
* Alternative Methods:	*
* Author: Emily Castles
* Last Modified: 7th December 2010
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
	guess = (char*) malloc(LEN);
	word = (char*) malloc(LEN);
	int gcount, wcount;
	
	fp = fopen( "words.txt", "r" ); /* open for reading */
	
	if ( fp == NULL )/*check that file can be opened, if not, exit program with message*/
	{
		printf("Cannot open file for reading\n");
		exit(0);
	}
	
	printf("Guess the word!\n");
	while (fgets(word, LEN, fp) != NULL) /*reads each word from the input file*/
	{
		for(wcount=0; word[wcount] != '\n'; wcount++) /*for loop to find the end of the word (based on carraige return \n) and then set end of word to \0*/
		{
			
		}
		word[wcount] = '\0';
		
		for (gcount = 0; gcount < 3 && strcmp(word, guess) != 0; gcount++)/*compares guess to word from file up to 3 times*/
		{
			scanf("%99s", guess);
							
			if (strcmp(word, guess) == 0)
			{
				printf("Correct guess - well done.\nNew Game\nGuess the word!\n");
			}
			
			else
			{
				printf("Sorry %s is not the secret word\n");
			}
		}
		if (strcmp (word, guess) != 0)
		{	
			printf("Game Over. You have used your three chances.\nNew Game\nGuess the word!\n");
		}
	
		
	}
	
	fclose(fp);
	return 0;


}