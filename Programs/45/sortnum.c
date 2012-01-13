#include <stdio.h>
int main (void )
{
	int count,altcount, temp;
	int arr[10];
	int *a;
	a=arr;
	
	for ( count=0; count<10; count++)/*Enter 10 numbers and read to array*/
	{
		printf ("Enter integer %d : ",count+1);
		scanf ("%d", &arr[count]);
	}
	
	printf ("Before sorting:\n" );/*Print out 10 numbers unsorted*/
	for ( count=0; count<10 ; count++)
	{
		printf ("%d ", arr[count] );
	}
	printf ("\n" );


	for ( count=0; count<10; count++)/*Go through each position in the array */
	{
		for ( altcount=0; altcount<10-count-1; altcount++)/*This for loop goes through each position and swaps larger numbers to the right, moving them along the line to the end. 
								  *At the end of the first go through the loop, can be sure that the largest number is at the end, others are still mixed
								  *The second loop only goes as far as 1 from the end, swapping the largest number to this position...etc...etc*/
			
			if ( (arr[altcount]) > (arr[altcount+1]))/*Test if number on left is > number on the right of the row, if so, swap to the right using a temp*/
			{
				temp = arr[altcount];
				(arr[altcount]) = (arr[altcount+1]);
				(arr[altcount+1]) = temp;
			}
	}
	
	printf ( "After sorting:\n" );/*Print out 10 numbers sorted*/
	for ( count =0 ; count < 10 ; count++)
	{
		printf ( "%d ",arr[count] );
	}
	
	printf ( "\n" );
	return (0);
}

