/*This program inputs a string from the user (fgets) and prints out every second character of that string
*Solution
	*ask user to enter string
	*fgets string to character array
	*get length of string using strlen
	*starting at count=1 (i.e. second character), print character and add 2 to count until string length is reached 
* New Learning Points: 	*wrote solution first
						*had to consider that depending on string length, adding 2 to count, may miss the end of the string. used < instead of <=
						*the for loop now prints every second letter and, depending on strlen, prints the Null character (space) at the end
* Alternative Methods	*count the strlen and based on whether it's an even or odd number (how to assess this) ensure that the end of the string isn't missed out
						*if you didn't want to include spaces, you could start a more complicated program which identifies spaces and restarts count
* Author: Emily Castles
* Last Modified: 8th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LEN = 200;
int main(void)
{
char sentence[LEN];
int count;

	printf("Please enter a sentence:\n");
	fgets(sentence, LEN, stdin); /*copy user input to sentence character array*/
	
	for (count=1; count < strlen(sentence); count=count+2)/*print every second character based on string length and count+2*/
		{
			printf("%c", sentence[count]);
		}
	


return 0;
}