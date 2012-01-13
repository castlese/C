/*This program demonstrates printing memory address and string using char array 
* Author: Emily Castles
* Last Modified: 24th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MEM = 50;

int main(void)
{
	char input[MEM];
	
	printf("Enter some words\n");
	fgets(input, MEM, stdin);
	
	printf("The character array starting from memory location %u, contains: %s\n", input, input);
	return 0;
}
/* this program acts the same as the previous one (Program 26) which used pointers and malloc to assign storge to a character variable. In both cases, 
	a memory address is pointed to by the variable and the string that is entered to can be referenced by that memory location. Again, the %u refers to the 
	memory address of "input", while the %s refers the string located at "input"*/
