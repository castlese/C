/*This program reads a sentence input by the user, reverses the order of each word and returns the sentence to them
* Key Learning Points:	*using counts, strlen(), '\0' and ' ' to identify start and end of word
						*tested problem solving more than programming skill;
* Alternative Methods: 	*read the reversed sentence to an array (char reverse[SENTENCE_LENGTH}) so that it prints correctly, and also can maintain original
						*user input;
						*this doesn't identify the start of a word, but the end. Could be changed to do it like this (similar to Program 23)
						*use a temproary character in performing the swap (instead of counting back through the letters and swapping them that way as done here)
						
* Author: Emily Castles
* Last Modified: 16th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SENTENCE_LENGTH=100; /*defines the sentence length as a constant 100, does not use the preprocessor. Useful if you need to change sentence length
								* at a later date - only need to change one value*/

int main(void)
{
	char sentence[SENTENCE_LENGTH];
	int scount;/*count used to identify the start of a word within the sentence*/
	int ecount;/*count used to identify the end of a word (space) within the sentence*/

	
	printf("Enter a sentence: ");
	fgets(sentence, SENTENCE_LENGTH, stdin);/*fgets is used instead of scanf and reads the sentence string which can include different variable types
											*stdin stands for standard input and refers to the user input
											*stdin is a variable which is included in the stdio.h header file and therefore does not to be declared
											*/

	sentence[strlen(sentence)-1] = ' ';
	printf("Reverse:");
	
	for(scount=0;sentence[scount]!='\0';scount++)/*go through whole sentence to end \0*/
	{
		if(sentence[scount] == ' ')/*reach a space, establishes end of a word*/
		{
			for(ecount=scount-1;ecount>=0 && sentence[ecount]!=' ';ecount--)/*at this point scount represents space character, scount-1 represents last char in word. Go through until get to first char */
			{
				printf("%c",sentence[ecount]);/*could also at this point read the reversed sentence into a new array (reverse defined above) so that original user entry is maintained*/
				
			}
		}
		printf(" ");/*print space*/
	}

	/*for(ecount=strlen(sentence)-1;sentence[ecount]!=' ';ecount--)/* The end of the last word is not identified by the above for loop as there is not necessarily a space there
												   * This for loop scans the last word (based on strlen) and reverses it*/
	/*{
		
		printf("%c",sentence[ecount]); /* this method causes there to be a carraige return between the sentence and the last word which isn't desirable
									 TODO read the reverse sentence into an array and print it at the end instead*/
	/*}*/
	

	return 0;
}