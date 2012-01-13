/*This program uses two for loops to print 0-10 and 10-0 in sequence in the format number.number (0.10, 1.9, 2.8........10.0)
* New Learning Points: 	*write a solution to the problem to begin with! I assumed initially that the solution would be a simple combination of 
						*previous two programs 34 and 35) however, on execution, realised that I needed to insert the "if" statement to prevent 
						*all combinations of the numbers being printed out
* Alternative Methods:	*could use the first number as a count and set the second number as 10 - count
* Author: Emily Castles
* Last Modified: 8th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int number1, number2;

		for (number1=0; number1 <=10; number1++)
		{
			printf("%d.", number1);
			for (number2=10; number2 >=0; number2--)
			{
				if (number1 + number2 == 10)/*only print out combination of numbers as per spec sheet*/
				{
					printf("%d\n",number2);
				}
			}
		}
		
	return 0;
}
