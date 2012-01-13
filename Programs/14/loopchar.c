/*A program to run a loop to add 1 to character 10000 times and test result
 *Authors: Emily Castles
 *Last Modified: 11th Nov 2010
 */
 
#include <stdio.h>
int main(void)
{
	int count = 0;
	char var = 0;

	while (count < 10000)
	{
		count = count + 1;
		var = var + 1;
		printf("%d\n", var); /*see footnotes*/
	}
	
	printf("%d\n", count);
	
	return 0;
}
/* printout as follows:
1
2
3
.
.
128
-127
-126
.
.
-1
0
1
.
.
10000
*The "var" variable is being treated as a byte, therefore it cannot be used as a counter for the loop 
*as the maximum value would be 255, resulting in an infinite loop. 
*
*Instead I have used an integer "count" to control the loop and I have added 1 to both var and count within the loop. 
*The result is that the print out prints the range -127 to +128 in a loop until the count reaches 10,000.
* 
*I have printed out the final value of the count also. I had expected this to be 9,999 as 0 - 9999 is 10,000 times, however 
*when I ran the program, the final count value was 10,000. 
*
*This is because for the final loop that is run, at the start of the loop the while condition tests and sees that count=9,999, 
*The condition is satisfied, therefore, the loop runs which adds 1 to the count (=10,000), the while condition is checked again. 
*Because the count is no longer <10,000 the loop ends.
*
*/