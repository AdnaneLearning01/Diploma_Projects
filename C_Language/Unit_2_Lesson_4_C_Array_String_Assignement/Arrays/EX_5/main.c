/*

 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Adnan
 */

/* C Program to search an element in Array */

#include <stdio.h>

int N;
int searchedNum = 0;
int i;



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

	printf("\nEnter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &searchedNum);


	for(i = 0; i < N; i++)
	{
	    if(Array[i] == searchedNum)
	    {
	        printf("Number found at the location %d", i + 1);
	        break;
	    }
	}

	if (i == 5)
	{
	    printf("%d does not exist in the Array",searchedNum);
	}

	return 0;
}



