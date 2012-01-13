/* This program gives the user three chances to guess a secret word (uses a for loop).
*Key Learning Points:	*strcmp() to compare strings saved in an array
						*setting a constant (i.e. the secret word)
						*using && in a comparison 
*Alternative Methods:	*use #default to set the constant secret word. This is done using the preprocessor
						*use a pointer char *guess instead of char guess[100]. Does the same thing. 
						*Could use a while loop but not as efficient
Author: Emily Castles
Last Modified: 11/12/2010
*/
#include <stdio.h>

const char SECRET[] = "television";
int main(void)
{
	char guess[100];
	int count;

	for (count = 0; count < 3 && strcmp(SECRET, guess) != 0; count++)
	{
		printf("Guess the word!\nHint: You find it in the living room or kitchen or sitting room or bedroom...or all of the above!.\n");
		scanf("%99s", guess);
		if (strcmp(SECRET, guess) == 0)
		{
				printf("Correct guess - well done\n");
		}
		else
		{
				printf("Sorry %s is not the secret word\n");
		}
	}
	
	if (strcmp (SECRET, guess) != 0)
	{	
		printf("Game Over. You have used your three chances.");
	}
	return 0;

}