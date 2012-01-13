/*Key Learning Points: 
	*Declaring variables, arrays of a specified size; 
	*Using sizeof() function to find the size of a variable;
	*%d to print to screen;
	*Size of the different variable array types (more or less the same size ~ 2686700bytes on my computer which me)
*/
#include <stdio.h>
int main(void)
{
int number;
int int_size = sizeof(number);
int numarrsmall[3];
int int_sizesm = sizeof(numarrsmall);
int numarrbig[500];
int int_sizebig = sizeof(numarrbig);
char letter;
char char_size = sizeof(letter);
float fl;
float float_size = sizeof(fl);
double dbl;
double double_size = sizeof(dbl);
printf("The size of the number variable is %d bytes \n", int_size);
printf("The size of the small number array of 3 is %d bytes \n", int_sizesm);
printf("The size of the small number array of 500 is %d bytes \n", int_sizebig);
printf("The size of the character variable is %d bytes \n", char_size);
printf("The size of the float variable is %d bytes \n", float_size);
printf("The size of the double variable is %d bytes \n", double_size);
return 0;
}