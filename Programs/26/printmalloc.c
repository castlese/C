/*This program demonstrates printing memory addresses and array using malloc
* Key Learning Points:	*use of malloc
* Alternative Methods:	*could allocate memory within the array (e.g. char memory[50]). This would mean that this amount of memory us used for the whole program, as
						*opposed to just when required. 
* Author: Emily Castles
* Last Modified: 24th November 2010
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MEM = 50;

int main(void)
{
	char *memory; /*pointer to address named memory*/
	memory = (char*) malloc(MEM);/*assigns MEM bytes of memory starting at the location pointed to by the memory variable*/
	
	printf("Enter some words\n");
	fgets(memory, MEM, stdin);
	
	printf("The character array starting from memory location %u, contains: %s\n", memory, memory);
	return 0;
}
/* In the final printf statement, %u prints the memory address (unsigned as opposed to signed integer) while %s points to the string located in memory*/
