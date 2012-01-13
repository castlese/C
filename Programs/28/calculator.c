/*This program is a calculator in which the user can input the calculation on the command line. 
* New Learning Points: 	*second main function (argc, argv[])
						*sscanf for reading character array to an integer
						*use of second pointer in argv[][] array.
* Alternative Methods: 	*as previous calculator programs which prompt the user for number entry when the program is executed
						*could use a switch statement
* Author: Emily Castles
* Last Modified: 25th November 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
int numbers[4]; /*declares numbers array for all numbers to be stored*/
	
	sscanf(argv[1], "%9d", &numbers[0]);/*copies character array in argv[1] to integer numbers*/
	sscanf(argv[3], "%9d", &numbers[1]);/*copies character array in argv[3] to integer numbers*/
	
	if (argv[2][0] == '+')/*each argv[i] is an array, so to get to the first character in this array,
							we need to point to its exact position in the array. If we don't do this, the boolean op
							cannot be used as we are comparing a string with character*/
	{
		numbers[2] = numbers[0] + numbers[1];
		printf("%d + %d = %d", numbers[0], numbers[1], numbers[2]);
	}
	
	else if (argv[2][0] == '-')
	{
		numbers[2] = numbers[0] - numbers[1];
		printf("%d - %d = %d", numbers[0], numbers[1], numbers[2]);
	}
	
	else if (argv[2][0] == 'x')
	{
		numbers[2] = numbers[0] * numbers[1];
		printf("%d x %d = %d", numbers[0], numbers[1], numbers[2]);
	}
	
	else if (argv[2][0] == '/')
	{
		numbers[2] = numbers[0] / numbers[1];
		printf("%d / %d = %d", numbers[0], numbers[1], numbers[2]);
	}

return 0;
}