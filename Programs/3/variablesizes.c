/*Key Learning Points: 
*Declaring variables; 
*Using sizeof() function to find the size of storage allocated to a variable;
*%d to print to screen;
*Size of the different variable array types - integers are assigned 4 bytes of storage, characters 1 byte, floating point 4 bytes, double precision 8 bytes
*/
#include <stdio.h>
int main(void)
{
	int numbers[3];/*an array of three integers*/
	int int_size = sizeof(numbers);/*declares size of numbers array*/
	
	char letters[3];/*an array of three characters*/
	int char_size = sizeof(letters);/*declares the size of character array*/
	
	float fl_arr[3];/*an array of three floating points  - a floating point is a rational number, i.e. can include decimals*/
	int float_size = sizeof(fl_arr);/*declares the size of float array*/
	
	double dbl_arr[3];/*a large float*/
	int double_size = sizeof(dbl_arr);/*declares the size of the double array*/
	
	printf("The size of the numbers array is %d bytes \n", int_size);
	printf("The size of the character array is %d bytes \n", char_size);
	printf("The size of the float array is %d bytes \n", float_size);
	printf("The size of the double array is %d bytes \n", double_size);
	
	return 0;
}