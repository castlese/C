#include <stdio.h>
int main(void)
{
	int numbers[4]; /*declares numbers array for all numbers to be stored*/
	char operator; /*declares operator*/
	
	printf("What would you like to do? Add(+), Subtract(-), Multiply (*), Divide (/), Quit (q). Enter the character in brackets:\n");
	operator = getchar();
	
	while (operator == '\n')/*loop to ensure the operator is read in*/
	{
		operator = getchar();
	}
	
	while (operator != 'q') /* if you enter q instead of a number at any of the stages, the program crashes. Only can enter q at the operator prompt stage*/
	{
		printf("Please enter first number:\n");/*asks the user to input a number*/
		scanf("%9d", &numbers[0]);/*assigns number entered to first place in the array numbers*/
		printf("Please enter second number:\n");/*asks the user to input another number*/
		scanf("%9d", &numbers[1]);/*assigns number entered to second place in the array numbers*/
		
		if (operator == '+')
			{
				numbers[2] = numbers[0] + numbers[1];/*adds*/
				printf("Answer = %d\n", numbers[2], "\n");/*prints the answer to screen*/
			}
		
		else if (operator == '-')
			{
				numbers[2] = numbers[0] - numbers[1];/*subtracts*/
				printf("Answer = %d\n", numbers[2], "\n");/*prints the answer to screen*/
			}
		
		else if (operator == '*')
			{
				numbers[2] = numbers[0] * numbers[1];/*multiplies*/
				printf("Answer = %d\n", numbers[2], "\n");/*prints the answer to screen*/
			}
		
		else if (operator == '/')
			{
				numbers[2] = numbers[0] / numbers[1];/*divides*/
				printf("Answer = %d\n", numbers[2], "\n");/*prints the answer to screen*/
			}
	}

	return 0;
}