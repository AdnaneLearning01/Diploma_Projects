/*

 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Adnan
 */

/* Write C Program to Print a Integer Entered by a User */

#include <stdio.h>

unsigned int Number = 0;
int main()
{
	printf("Enter a Integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Number);
	printf("You Enter : %d ", Number);
	return 0;
}


