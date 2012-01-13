/*This program demonstrates the second main function
* New Learning Points:	* Use of second main function (argc argv[])
* Author: Peter Cahill (from notes) Emily Castles (comments)
* Last Modified: 23rd November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	printf("You supplied %d arguments\n", argc);
	for (i = 0; i < argc; i++)
		printf("argument %d = %s\n", i, argv[i]);
	return 0;
}
/*This program counts the number of arguments(user inputs in the commandline) and returns each one, numbered 0 - i. 
* argc counts the number of user inputs (seperated by a space), and argv stores these inputs to a character array. To access the arguments use argv[argc]
* argv[0] is always the executable file name
*/