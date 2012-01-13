/*This program inputs a string from the user (fgets), counts and prints the number of vowels in the user-input string
*Solution
	*ask user to enter string
	*fgets string character array
	*string count = 0, vowel count = 0
	*read through characters, if character is a, e, i, o or u, add 1 to vowel count. Add 1 to string count each time until strlen is reached
	*print vowel count 
* New Learning Points: 	*wrote solution first
* Alternative Methods:	*use pointers
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
int scount, vcount=0;

	printf("Please enter a sentence:\n");
	fgets(sentence, LEN, stdin); /*copy user input to sentence character array*/
	
	for (scount=0; scount < strlen(sentence); scount++)/*scan array for vowels and count */
		{
			if (sentence[scount] == 'a' || sentence[scount] == 'e' || sentence[scount] == 'i' || sentence[scount] == 'o' || sentence[scount] == 'u')
				{
					vcount++;
				}
		}
	
	printf("Number of vowels in sentence is %d", vcount);
	


return 0;
}