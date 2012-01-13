/*This program produces a random float number between 0 and 1.0
*Solution
	*Ask user to enter a word
	*Add together the ASCII Values for the word characters - use this value as seed number for random number generator
	*Use a random number function/algorithm to generate a random number from the seed number and convert to float betwee 0 and 1.0
	*Loop: Ask user if they want to generate number, print number until user chooses to quit
	*
* New Learning Points: 	*working with float numbers (printf formatting for decimal places)
						*random functions, seeding of function
						*scanf, gets etc
* Alternative Methods:	*improve by using current time as the seed number instead of user input for the program. 	
						*write a function which returns a random number and which uses a global variable as a seed which is updated with each new random number
* Author: Emily Castles
* Last Modified: 12th December 2010
*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned long randomint;
	char seed[1];
	char userinput[1], temp[1];
	float random;
	int count;

	printf("Enter a letter or symbol:");
	gets(seed);
	randomint =  seed[0] * 10000;/*user input character forms seed number in it's ASCII code form*/
	

	for(count=0; count<10000; count++)/*generates up tp 10000 random numbers*/
	{	
		printf("\nHit Return to generate a random number or any other key to quit \n");
		scanf("%c", &userinput);
		if(userinput[0] =='\n')
		{
		randomint = (randomint * 1140671485 + 12820163) & 16777215;/*random number equation based on Linear Congruetial Generator*/
		random = (float)randomint / (float)16777216.0;/*convert to float between 0 and 1.0*/
		printf("%.4f\n", random);/*print 4 decimal places*/
		}
		else /*exit program*/
		{
			exit(0);
		}
			
	}
	
	return 0;
}