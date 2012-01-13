#include <stdio.h>
int main(void)
{
	char colours[30];/*declares a character array of 30 characters to store user input (colours)*/

	printf("Please tell us your favourite colour:\n");/*asks the user to imput a colour*/
	scanf("%29s", colours);/*writes user input to the colours array*/
	
	printf("You chose %s\n", colours);/*outputs user colour input*/
	printf("Good Choice!\n");
	return 0;
}