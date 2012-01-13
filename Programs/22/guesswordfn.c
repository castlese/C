/*Asks user to guess a word - using a function to wait and read user input
* Key Learning Points:	*writing a function
* Alternative Methods:	*In this case the use of a function doesn't actually cut down on code so it wasn't entirely necessary
						*use fgets instead of scanf 
						*use pointers
* Author: Emily Castles
* Last Modified: 23rd November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char SECRET[] = "television";

void get_user_input(char *guessfn);/*declaration of function to read user input*/

int main(void)
{
	char guess[100];
	int count;

	for (count = 0; count < 3 && strcmp(SECRET, guess) != 0; count++)
	{
		printf("Guess the word!\nHint: You find it in the living room or kitchen or sitting room or bedroom...or all of the above!.\n");
		get_user_input(guess); /*calls get_user_input function*/
		
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

/*function definition - get user input*/
void get_user_input(char *guessfn)
{
	scanf("%99s", guessfn);
}