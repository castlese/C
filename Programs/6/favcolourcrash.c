#include <stdio.h>
int main(void)
{
	char colours[3];/*declares a character array of 30 characters to store user input (colours)*/

	printf("Please tell us your favourite colour:\n");/*asks the user to imput a colour*/
	scanf("%s", colours);/*writes user input to the colours array - no limit on length of input*/
	
	printf("You chose %s\nGood Choice!\n");/*depending on input it may crash due to input length being greater than array size*/
	return 0;
}