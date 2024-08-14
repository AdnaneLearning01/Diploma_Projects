/*

 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Adnan
 */
/* Write C Program to Add Two Integers */

#include <stdio.h>

unsigned int NumberOne = 0;
unsigned int NumberTwo = 0;
int main()
{
	printf("Enter Two Numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &NumberOne, &NumberTwo);
	printf("Sum : %d ", NumberOne + NumberTwo);
	return 0;
}

