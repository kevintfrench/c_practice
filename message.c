/* 
*Building a message with safe string functions
*/

#include<stdio.h>
#include<string.h>

int main(void) {
	/*
	*read a name from user
	*/

	printf("What is your name? ");

	char name[40];
	scanf("%39s", name);

	/*
	*<name> is learning C
	*/

	char message[100];  /*Destination String*/

	strcpy_s(message, sizeof(message), name );
	strcat_s(message, sizeof(message), " is " );
	strcat_s(message, sizeof(message), "learning C." );

	/* print out message */
    puts(message);

    return 0;


}