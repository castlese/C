#include <stdio.h>
int main(void)
{
	int number1, number2, number3; /*declares three numbers for user entry*/

	printf("This program will find the largest of three numbers.\nPlease enter first number\n");/*asks the user to input a number*/
	scanf("%9d", &number1);/*assigns entry to number1*/
	printf("Please enter second number\n");/*asks the user to input another number*/
	scanf("%9d", &number2);/*assigns entry to number2*/
	printf("Please enter a third number\n");
	scanf("%9d", &number3);/*assigns entry to number3*/
	
	if ((number1 >= number2) && (number1 >= number3))
	{
		printf("The largest number is: %d\n", number1);
	}

	if ((number2 >= number1) && (number2 >= number3))
	{
		printf("The largest number is: %d\n", number2);
	}

	if ((number3 >= number2) && (number3 >= number1))
	{	
		printf("The largest numbers is: %d\n", number3);
	}
	
	return 0;
}