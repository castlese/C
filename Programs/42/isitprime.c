/*This program allows a user to enter a number between 0 and 30 and tells them if it's a prim number
*Solution
	*ask user to enter a number and scanf
	*a prime is divisible only by itself and 1. Check the user number divided by all numbers between 2 and the user number does not equal zero -> prime
	*print out the result (ie prime number or not) (used string to limit if statement to 1)
* New Learning Points: 	*logic of prime number test
						*% operator - returns remainder
* Alternative Methods:	*instead of changing text in result array return a true or flase value and use an if statement to print message accordingly 
*use if statement to write a list of comparisons between number entered and every prime number between 0 and 30 - not as elegant a solution
						*use a function to return whether number is prime or not
						
					
* Author: Emily Castles
* Last Modified: 12th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
	int number, count;
	char result[20];/*assume number is a prime*/
	strcpy(result, "a prime");
	printf("Enter a positive integer between 0 and 30: ");
	scanf("%d", &number);
	
	for (count = 2; count < number; count++)/*divide number by (2 as far as one less than the number) to check if there is a remainder)
											*if the remainder is 0 => not a prime, if remainder is not 0 => a prime*/
	{	
		if ((number % count) == 0)/* This if statement is not working. Why??*/
		{
			strcpy(result, "not a prime");/*if remainder is not 0, copy "not a prime" to result array*/
		}

	}
			
	printf("Number is %s", result);/*print result*/
	return (0);
}
