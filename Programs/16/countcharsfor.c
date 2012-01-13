/* This program counts character input using a for loop
* Key Learning Points	*for loop;
						
* Author: Emily Castles
* Last modified 12th Nov 2010
*/
#include <stdio.h>
int main(void)
{
	char word[100];
	int count;

	printf("Please enter a word:\n");
	scanf("%99s", word);

	for (count = 0; word[count] != '\0'; count=count+1)
	{
	}
	
	printf("The length of the word entered is %d", count);
	return 0;
}