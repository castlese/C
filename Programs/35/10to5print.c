/*This program uses a for loop to change an integer variable from 10 to 5, using printf to output each value in sequence
* New Learning Points: 	*
* Author: Emily Castles
* Last Modified: 7th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
int number;

	for (number=10; number >=5; number--)
		{
			printf("%d\n", number);
		}
	
return 0;
}
