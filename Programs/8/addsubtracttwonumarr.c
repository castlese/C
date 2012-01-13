#include <stdio.h>
int main(void)
{
	int numbers[4]; /*declares numbers array for all numbers to be stored*/

	printf("Please enter first number to be added:\n");/*asks the user to input a number*/
	scanf("%d", &numbers[0]);/*assigns number entered to first place in the array numbers*/
	
	printf("Please enter second number to be added:\n");/*asks the user to input another number*/
	scanf("%d", &numbers[1]);/*assigns number entered to second place in the array numbers*/
	
	numbers[2] = numbers[0] + numbers[1];/*sums the numbers*/
	printf("The sum of the numbers entered = %d\n", numbers[2], "\n");/*prints the sum to screen*/
	
	numbers[3] = numbers[0]-numbers[1];/*subtracts the numbers*/
	printf("The same numbers subtracted = %d\n", numbers[3], "\n");/*prints the subtracted value to the screen*/
	return 0;
}