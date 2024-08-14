/*

 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Adnan
 */
/* Write C Program to Multiply two Floating Point Numbers */

#include <stdio.h>
float NumberOne = 0;
float NumberTwo = 0;
int main()
{
	printf("Enter Two Numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &NumberOne, &NumberTwo);
	printf("Product : %f ", NumberOne * NumberTwo);
	return 0;
}


