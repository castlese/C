/*This program reads a sentence input by the user and replaces each vowel with a dollar sign
* Key Learning Points:	*use the || or operator
						*test for lower and upper case vowels - C case sensitive;
* Alternative Methods:	*use a switch function? probably not a better way though
* Author: Emily Castles
* Last Modified: 18th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SENTENCE_LENGTH=100; 

int main(void)
{
	char sentence[SENTENCE_LENGTH];
	int i;
		
	printf("Enter a sentence: ");
	fgets(sentence, SENTENCE_LENGTH, stdin);
	
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i] == 'a'|| sentence[i] == 'e'||sentence[i] == 'i'||sentence[i] == 'o'||sentence[i] == 'u'|| 
		sentence[i] == 'A'|| sentence[i] == 'E'||sentence[i] == 'I'||sentence[i] == 'O'||sentence[i] == 'U')
		{
			sentence[i] = '$';
		}
	}
	
	printf("%s\n", sentence);
	return 0;
}