/*Key Learning Points:	*scanf a string into a character array - no '&' required to write to beginning of that array 
						* use of '\0' to recognise end of the string;
*Alternative methods	*for loop instead of while;
						*use pointer char *word instead of char word[30] - does the same thing;
*/
						
#include <stdio.h>
int main(void)
{
	char word[30];
	int count;
	count = 0;

	printf("Please enter a word:\n");
	scanf("%29s", word);

	while (word[count] != '\0')
	{
		count=count+1;
	}
	
	printf("The length of the word entered is %d", count);
	return 0;
}