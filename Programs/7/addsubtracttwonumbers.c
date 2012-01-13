#include <stdio.h>
int main(void)
{
	int number1, number2, sum, sub; /*declares numbers to be entered, their summed and subtracted values*/

	printf("Please enter first number to be added:");/*asks the user to imput number 1*/
	scanf("%d", &number1);/*assigns value to variable number1, & used as number1 is not an array*/
	
	printf("Please enter second number to be added:");/*asks the user to input number 2*/
	scanf("%d", &number2);/*assigns vlaue to variable number2*/
	
	sum = number1+number2;
	printf("The sum of the numbers entered is: %d\n", sum, "\n");
	
	sub = number1-number2;
	printf("The same numbers subtracted = %d\n", sub, "\n");
	return 0;
}