/*

 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Adnan
 */

/* C Program to find the length of a string */

#include <stdio.h>
#include <string.h>

char text[50];
int i = 0;
int counter = 0;

int main()
{
    printf("Enter a string :");
    fflush(stdin); fflush(stdout);
    fgets(text, sizeof(text), stdin);

    for (i = 0; (text[i] != '\0'); i++)
    {
        counter++;
    }

    printf("Length of string  : %d", counter - 1);

	return 0;
}


