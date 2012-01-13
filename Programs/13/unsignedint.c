/*This program tests an unsigned integer
 *Authors: Emily Castles
 *Last Modified: 11th Nov 2010
 */
 
#include <stdio.h>
int main(void)
{
	unsigned int n = 1;
	printf("%u\n", n);
	n = n - 2;
	printf("%u\n", n);
	return 0;
}
/* printout as follows:
1
4294967295
*The actual answer should be -1 but because it is an unsigned integer the program goes the the largest number available
*/