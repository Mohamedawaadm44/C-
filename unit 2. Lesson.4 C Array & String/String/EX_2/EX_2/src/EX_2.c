/*
 ============================================================================
 Name        : EX2.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_2
 Description : strlen() function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char str [100];
	int counter ,string_length=0 ;

	// input the string
	printf("Enter a string:" );
	fflush(stdin);
	fflush(stdout);
	gets(str);

	// calculate length
	counter=0;
	while(str[counter]!= '\0')
	{
		counter++;
		string_length++;
	}

	// print the length
	printf("length of string : %d \n",string_length);


	return 0 ;
}
