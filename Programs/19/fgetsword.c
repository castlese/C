/*This program reads a word input by the user and returns the word to them (using scanf). Use to compare with example from notes
* Key Learning Points:	*comparison of fgets and scanf
* Author: Emily Castles
* Last Modified: 15th November 2010
*/
#include <stdio.h>

int main(void)
{
	char word[100];
	printf("Enter a word: ");
	scanf("%99s", word);
	printf("You input: %s", word);

return 0;
/*
* Larger gap at end of fgetsexample.c becasue fgets reads in the \n carraige return key as well as the string */
}