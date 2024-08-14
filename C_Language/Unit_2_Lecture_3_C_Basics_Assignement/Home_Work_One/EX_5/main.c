/*

 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: Adnan
 */

/* Write C Program to Find ASCII Value of a Character */
#include <stdio.h>
char character;

int main()
{
	printf("Enter a Character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);
	printf("ASCII Value Of %c : %d ",character, character);
	return 0;
}
