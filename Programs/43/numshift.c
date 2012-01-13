/*This program shifts 5 numbers entered by the user, one place to the left
*Solution
	*ask user to enter 5 numbers
	*read these numbers to a number array
	*copy the last number to a temporary variable
	*using a for loop, move the other four numbers
	*copy the value in the temporary variable to position one
* New Learning Points: 	*problem solving/logical elements to problem
						*reiterating scanf rules (& etc)
* Alternative Methods:	*use a function
						*use an array of 6 values instead of using a temp
* Author: Emily Castles
* Last Modified: 12th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SIZE = 5
int main(void)

{
	int number[SIZE];
	int temp, count; 


	for (count = 0; count < SIZE; count++)/* scanf input*/
	{
		printf("Enter a number:");
		scanf("%9d", &number[count]);
	}
	
	printf("input:");/*print input*/
	for (count = 0; count < SIZE; count++)
	{
		printf("%d ", number[count]);
	}
	
	temp = number[0];/* assign first number to temporary variable*/
	for (count = 0; count < SIZE; count++)/*shift other numbers*/
	{
		number[count] = number[count+1];
	}
	
	number[SIZE-1] = temp;/* assign temp to last number*/
	
	printf("\noutput:");/*print output*/
	for (count = 0; count < SIZE; count++)
	{
		printf("%d ", number[count]);
	}
	return (0);
}
