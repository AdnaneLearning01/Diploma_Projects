/*

 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Adnan
 */
/* Write Source Code to Swap Two Numbers */

#include <stdio.h>
float NumberOne = 0;
float NumberTwo = 0;
float temp = 0;
int main()
{
	printf("Enter Value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &NumberOne);

	printf("Enter Value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &NumberTwo);

	temp = NumberOne;
	NumberOne = NumberTwo;
	NumberTwo = temp;

	printf("After swapping, Value of a = %0.2f\n", NumberOne );
	printf("After swapping, Value of b = %0.2f\n", NumberTwo );
	return 0;
}

