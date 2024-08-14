

/*

 * main.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Adnan
 */

/* C Programm to Check whether a Character is an Alphabet or not */

#include <stdio.h>

char character;


int main()
{
	printf("Enter a Character :");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);

	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		printf("%c is an alphabet.",character);
	}
	else
	{
		printf("%c is not an alphabet.",character);
	}

	return 0;

}



