/*
 ============================================================================
 Name        : EX2.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_2
 Description : Calculate average using array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float array[100];
	int num,counter;
	float sum=0;
	printf("Enter the number of data:\n" );
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);

	// input the array elements
	for(counter=0;counter<num;counter++)
	{
		printf("%d.Enter Number: " , counter+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &array[counter]);
		sum+=array[counter];
	}


	printf("Average = : %f\n" ,sum/num);

	return 0 ;
}
