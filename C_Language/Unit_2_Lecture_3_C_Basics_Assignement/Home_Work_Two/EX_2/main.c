/*



 * main.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Adnan
 */

/* C Program to Check Vowel or Consonant */

#include <stdio.h>

char character ;
int main()
{
	printf("Enter an alphabet :");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);

	switch (character)
	{

	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'i' :
	case 'I' :
	case 'o' :
	case 'O' :
	case 'u' :
	case 'U' :
		printf("%c is a Vowel.",character);
		break;

	default :
		printf("%c is a Consonant.",character);

	}

}

