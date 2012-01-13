/*This program reads a sentence input by the user, reverses the order of each word and returns the sentence to them. 
* A function is used to reverse the order of each word
* Key Learning Points:	*functions - arguments passed over from the main function to the swapping function
						*problem solving exercise
* Alternative Methods:	*Could probably return string from the function so that original entry by user is not compromised
						*The logic of the word counts could probably be carried out in different way - pass over the end of word count to the function,
						*instead of start of word
						*as with previous Program 20, instead of setting the last character in the string to a space, do a seperate loop for the last word
						*in the sentence
						*use a temproary character in performing the swap (instead of counting back through the letters and swapping them that way as done here)
						*use strcpy to copy swapped word 
* Author: Emily Castles & Peter Cahill
* Last Modified: 24th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_characters_in_word(char *input, int start_of_word); /*function declaration*/

int main(void)
{
	int count, length;
	char *array;
    array = (char*) malloc(200);/*sets size of array to read into as 100 bytes*/

	printf("enter some words:\n");
	fgets(array, 200, stdin);
	
	length = strlen(array);
	
	array[length-1] = ' '; /* replaces the \0 with a space. This lets us only need to check for space to indicate the end of a word*/
	
	for (count = 0; count < length; count++)	/* if there is no space, i.e. a character, this signifies the start of a word and the function to reverse 
												the word is called. Count is then increased using embedded "while" loop until a space is reached. 
												Then the outside if loop to reverse the word is started again
												*/
	
	{
		if (array[count] != ' ')
		{
			swap_characters_in_word(array, count);/*call function which swaps*/
			while(array[count]!= ' ')/*counts through until next space  */
				{
				count++;
				}
		}
			
			
		
	}
	
	printf("%s\n", array);/*prints array after all the words have been swapped*/

	free(array);/*free malloc memory*/
	array = NULL;
	
	return 0;
}



/*function definition*/
void swap_characters_in_word(char *input, int start_of_word)
{
	int wcount, word_length;
	char *swapped;

	for (word_length = start_of_word; input[word_length] != ' '; word_length++);
	word_length = word_length - start_of_word; /*calculates word length (based on start_of_word position) and stores it in word_length variable*/
	

	swapped = (char*)malloc(200); /* This allocates memory for us to copy the word into (in reverse order) (word length + space for \0)*/
	
	for (wcount = start_of_word; input[wcount] != ' ' ; wcount++)/* copies characters from input[] into swapped[] in reverse order*/
	{
		swapped[wcount] = input[start_of_word + (word_length-1)];
		word_length--;
	}

	for (wcount = start_of_word; input[wcount] != ' ' ; wcount++)/*reads swapped characters into the original input*/
	{
		input[wcount] = swapped[start_of_word];
		start_of_word++;
		
	}

	free(swapped);/*free swapped memory*/
	swapped = NULL;
}