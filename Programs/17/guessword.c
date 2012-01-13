/* This program challenges the user to guess a secret word - unlimited chances.
*Key Learning Points:	*strcmp() to compare strings saved in an array
						*setting a constant (i.e. the secret word)
*Alternative Methods:	*use #default to set the constant secret word. This is done using the preprocessor
						*use a pointer char *guess instead of char guess[100]. Does the same thing. 
Author: Emily Castles
Last Modified: 11/12/2010
*/
#include <stdio.h>

const char SECRET[] = "television";
int main(void)
{
	char guess[100];

	while (strcmp (SECRET, guess) != 0)
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
	return 0;

}