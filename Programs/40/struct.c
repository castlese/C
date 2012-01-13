/*This program allows the user to enter data into a structure variable and writes that data to disk
* New Learning Points: 	*fwrite()
						*structs and typedef
* Alternative Methods	*write data to file without the use of a struct
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
	FILE*out;
	
	printf("Enter firstname:\n");/*input user data*/
	scanf("%s", &user.firstname);
	printf("Enter surname:\n");
	scanf("%s", &user.surname);
	printf("Enter age:\n");
	scanf("%d", &user.age);
	
	out = fopen("userinfo.txt", "wb");/* file pointer for output*/
	
	if (out == NULL)/*error check file opens*/
		{
			printf("unable to open file for writing");
			exit(0);
		}
		
	fwrite(&user, sizeof(user_info), 1, out);/*write to file - 
											  *TODO tested program in example and does not write properly. End of string not recognised. Same problem here and 
											  *in Program 39*/
	printf("Information exported successfully");
	fclose(out);
	return 0;
}