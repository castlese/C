#include <stdio.h>
int main(void)
{
	char word[10];
	char c;
	
	printf("enter a word: ");
	scanf("%9s", word);
	printf("enter any character: ");
	c = getchar();/* scanf resulted in \n being stored and this is the character that getchar reads*/
	
	while (c == '\n')/* need to do this while loop to bypass the \n and get to the character that the user actually entered.*/
	{
		c = getchar();
	}
	
	if (c == '\n') printf("warning: char c contains a newline\n");
	
	printf("you entered: word %s, character %c\n", word, c);

	return 0;
}