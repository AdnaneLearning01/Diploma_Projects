/*

 *
 main.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Adnan
 */
/* C Program to Calculate Sum of Natural Numbers */
#include <stdio.h>

unsigned int UserInput = 0;
unsigned int Sum = 0;
unsigned int i = 0;


int main()
{
	printf("Enter a Integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d", &UserInput);

	for(i = 1; i <= UserInput; i++)
	{
		Sum += i;
	}

	printf("Sum = %d",Sum);

	return 0;

}
