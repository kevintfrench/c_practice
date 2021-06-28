/*
* Meet the user - C string I/O Demo
*/
 

#include <stdio.h>

int main(void) {
	printf("What is your name? ");

	char name[40];
	scanf("%39s", name);

	printf("\n");
	printf("Nice to meet you, %s!\n", name);

	return 0;
}