/*This program encrypts or decrypts a file and saves it as a new file
*
* Author: Emily Castles
* Last Modified: 15th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encaesar(char *encaesardata, int encaesarsize);
void decaesar(char *decaesardata, int decaesarsize);
void swap(char *swapdata, int swapsize);
void reverse(char *fswapdata, int fswapsize);


const int LEN = 30;/*maximum length of filename*/
const int SIZE = 1024;/*maximum size of file*/

int main(int argc, char *argv[])
{
	FILE *in, *out;
	char option[8];
	char sourcefile[LEN];
	char destfile[LEN];
	char *data;
	int count, size;
	size_t result;
	
/**************Check user has entered enough arguments********************************/	
	if (argc < 4)
	{
		printf("Not enough arguments entered. Please restart entering four arguments");
		exit(0);
	}
	
	sscanf(argv[1], "%s", &option);/*read in option and file names */
	sscanf(argv[2], "%s", &sourcefile);
	sscanf(argv[3], "%s", &destfile);

/************************Open File and Read Data to Data Pointer***********************/

	in = fopen(sourcefile, "rb");/*pointer for input file*/

	if (in == NULL)/*error check*/
	{
		printf("Cannot open file %s for reading", sourcefile);
		exit(0);
	}
		
	fseek (in , 0 , SEEK_END);/*checking file size*/
	size = ftell(in);
	rewind (in);

	data = (char*)malloc(sizeof(char)*size);/*memory set aside for size of file*/
		
	if(data == NULL)/*malloc error check*/
	{
		printf("Memory error",stderr); 
		exit(0);
	}

	result = fread(data, sizeof(char), size, in);/*read input file to data*/
		
	if (result != size)/*size error check*/
	{
		printf("Reading error",stderr); 
		exit (0);
	}
	
/********************************ENCRYPTION******************************************/	
	if (strcmp("encrypt", option) == 0)
	{
		reverse(data, size);/*Call Reverse Sentence function*/
		swap(data, size);/*Call Swap Letters function*/
		encaesar(data, size);/*Call Caesar Cipher encryption function */
		printf("File successfully encrypted");
	}


/********************************DECRYPTION******************************************/	

	if (strcmp("decrypt", option) == 0)
	{
		decaesar(data, size);/*Call Caesar Cipher decryption function */
		swap (data, size);/*Call Swap Letters function*/
		reverse(data, size);/*Call Reverse Sentence function*/
		printf("File successfully decrypted");
	
	}
/********************************Write Data to Output File*****************************/			
		
		out = fopen(destfile, "wb");

		if (out == NULL)/*error check*/
		{
			printf("Cannot open file %s to write to", destfile);
			exit(0);
		}
		
		fwrite(data, sizeof(char), size, out);
		
		free(data);
		fclose(in);
		fclose(out);
		
	
	

	return 0;
}


/***************************FUNCTIONS******************************/
/************Caesar Cipher Encryption Function*********************/
void encaesar(char *encaesardata, int encaesarsize)
{
int count;
	for (count=0; count < encaesarsize; count++)
	{
		encaesardata[count] = encaesardata[count] + 56;
	}

}

/************Caesar Cipher Decryption Function*********************/

void decaesar(char *decaesardata, int decaesarsize)
{
int count;
	for (count=0; count < decaesarsize; count++)
	{
		decaesardata[count] = decaesardata[count] - 56;
	}

}

/****************Swap Letters Encryption/Decryption Function***************/

void swap(char *swapdata, int swapsize)
{
int count;
char temp;

	for (count=0; count < swapsize; count++)
	{
		if (swapdata[count] == 'a')
			swapdata[count] = 'x';
		else if (swapdata[count] == 'x')
			swapdata[count] = 'a';
		else if (swapdata[count] == 'e')
			swapdata[count] = 'z';
		else if (swapdata[count] == 'z')
			swapdata[count] = 'e';
		else if (swapdata[count] == 'i')
			swapdata[count] = 'v';
		else if (swapdata[count] == 'v')
			swapdata[count] = 'i';
		else if (swapdata[count] == 'o')
			swapdata[count] = 'k';
		else if (swapdata[count] == 'k')
			swapdata[count] = 'o';
		else if (swapdata[count] == 'u')
			swapdata[count] = 'q';
		else if (swapdata[count] == 'q')
			swapdata[count] = 'u';
	}

}


/************************Reverse Sentence Encryption/Decryption Function******************************/
void reverse(char *reversedata, int reversesize)
{
	int counta, countb;
	char *reverse;
	reverse = (char*)malloc(reversesize);/*Temporary buffer to read reversed data into*/

 
	countb = reversesize;/* Read data into buffer in reverse order*/
	for (counta = 0; counta <= reversesize; counta++)
	{
		reverse[counta] = reversedata[countb];
		countb--;

	}


	for (counta = 0; counta<reversesize; counta++)/*Copy the reversed data back into the original pointer*/
		{
		reversedata[counta] = reverse[counta];
		
		}
	free(reverse);
}


