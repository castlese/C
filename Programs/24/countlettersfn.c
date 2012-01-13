/*This program reads words input by the user and counts the occurence of each letter in the alphabet
* The occurences of each letter are counted using a count_letter function. In this case, this doesn't 
* result in less code but it is cleaner to keep it seperate
* Key Learning Points:	*Dealing with ASCII characters, counting through the alphabet. Dealing with lower and upper case letters
						*functions
* Alternative Methods:	*funtion not entirely necessary here									
* Author: Emily Castles
* Last Modified: 24th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void count_letters(char *string, int alphabet[27], int alphcount, int strcount);/*function declaration*/

int main(void)
{
	int alphabet[27], alphcount, strcount, length;
	char *string;
    string = (char*) malloc(200);/*sets size of array to read user input into = 200 bytes*/

	printf("enter some words:\n");
	fgets(string, 200, stdin);
	length = strlen(string);
	
	for (alphcount = 0; alphcount < 26; alphcount++)/* for loop to set all count values in alphabet array to 0*/
	{
		alphabet[alphcount] = 0;
	}
	
	for (strcount = 0; strcount < length ; strcount++)/*for loop which calls 'count_letters function' for each character in the string entered by user*/
	{
		count_letters(string, alphabet, alphcount, strcount); /*call function*/
	}
		
	printf("The totals for each letter (both upper and lower case) are:\n");
	
	for (alphcount = 0; alphcount < 26; alphcount++) /*for loop to print out each letter of the alphabet and the total 
														count as calculated in count_letters function. 
														%c and "alphacount+97" call the alphabet character based on ASCII
														%d and alphabet[alphacount] calls the total for each alphabet character
													*/
	{
		printf("%c = %d\n", alphcount+97, alphabet[alphcount]);/*ASCII: 97 is "a", 98 is "b", etc. */
	}
		
	free(string);
	string = NULL;
	return 0;
}

/*function definition
* each time a character is passed into the function it is compared to each letter of the alphabet (upper and lower case)
* each match results in the count for that character being increased by 1
*/
void count_letters(char *string, int alphabet[27], int alphcount, int strcount)/*used the same variable names in main and function*/
{
		
	for(alphcount = 0; alphcount < 26; alphcount++)
	{
		if ((string[strcount] == (alphcount + 65)) | (string[strcount] == (alphcount + 97)))/*ASCII: 65 is "A", 66 is "B" etc AND 97 is "a", 98 is "b" etc. */
		{
			alphabet[alphcount] = alphabet[alphcount] + 1;
		}
	}
}			
			