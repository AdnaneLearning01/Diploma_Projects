/*

 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Adnan
 */

/* C Program to reverse string without using library function */

#include <stdio.h>
#include <string.h>

char text[50];
char reversedText[50];
int i = 0;

int main()
{
    printf("Enter a string :");
    fflush(stdin); fflush(stdout);
    fgets(text, sizeof(text), stdin);

    for (i = strlen(text) - 1; i >= 0  ; i--)
    {
        reversedText[strlen(text) - 1 - i] = text[i];
    }

    printf("reverse string is  %s", reversedText);

	return 0;
}


