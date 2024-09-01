/*

 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: Adnan
 */

/* C Program to insert an element in array */

#include <stdio.h>

int N;
int InsertedNumber = 0;
int i;
int location = 0;


int main()
{
	printf("Enter the number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&N);

	int Array[N];
	for(i = 0; i < N; i++)
	{
	    scanf("%d",&Array[i]);
	    fflush(stdin); fflush(stdout);
	}

	for(i = 0; i < N; i++)
	{
	    printf("%d \t",Array[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &InsertedNumber);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	for(i = N - 1; i >= location - 1; i--)
	{
	    Array[i + 1] = Array[i];
	}

	Array[location - 1] = InsertedNumber;

	printf("Result : ");
	for(i = 0; i <= N; i++)
	{
	    printf("%d \t",Array[i]);
	}

	return 0;
}
