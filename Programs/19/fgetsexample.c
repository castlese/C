/*This program reads a sentence input by the user and returns the sentence to them. 
* Key Learning Points:	*first use of fgets which reads a string of characters from user input or a file and stores them;
						*fgets is used for strings only (scanf similar but can be used for words or numbers or both);
* Alternative Methods:	*scanf instead of fgets
						*pointer instead of character array
* Author: Peter Cahill (From notes)
* Last Modified: 12th November 2010
*/
#include <stdio.h>

const int SENTENCE_LENGTH=100; 

int main(void)
{
	char sentence[SENTENCE_LENGTH];/*defines the sentence character array with a constant length of 100*/
	printf("Enter a sentence: ");
	fgets(sentence, SENTENCE_LENGTH, stdin);
/*fgets is used instead of scanf and reads a sentence string. In this case (user input) it recognises the end of string
 *by the return '\n' caharacter or by the maximum length (SENTENCE_LENGTH) minus one. There are other factors when reading from a file
 *stdin stands for standard input and refers to the user input
 *stdin is a variable which is included in the stdio.h header file and therefore does not to be declared
 *fgets can also be used for input from a file (the file name replaces stdin in the statement)
*/
	printf("You input: %s\n", sentence);
	
	return 0;

}