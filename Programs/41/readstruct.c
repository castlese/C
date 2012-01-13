/*This program reads a struct from a file and displays the 
* New Learning Points: 	*fread()
						*structs and typedef
* Alternative Methods	*read data from file without the use of a struct
* Author: Emily Castles & Dr. Peter Cahill (from notes)
* Last Modified: 8th December 2010
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_user_info{
	char firstname[20];
	char surname[20];
	int age;
}; /*declares the structure*/

typedef struct s_user_info user_info;/*define a new variable type for this struct*/

int main(void)
{
	user_info user; /*struct variable declaration using typedef defined variable type*/
	FILE*in;
	
	
	in= fopen("../40/userinfo.txt", "rb");/* file pointer for input*/
	
	if (in == NULL)/*error check file opens*/
		{
			printf("unable to open file for reading");
			exit(0);
		}
		
	fread(&user, sizeof(user_info), 1, in);/* read file */
											
	printf("Name: %s %s\nAge: %d", user.firstname, user.surname, user.age);
	fclose(in);
	return 0;
}