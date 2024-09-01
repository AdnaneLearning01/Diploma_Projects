/*

 * main.c
 *
 *  Created on: Sep 1, 2024
 *      Author: Adnan
 */
/* C Program to find the frequency of characters in a string */

#include <stdio.h>
#include <string.h>

char text[50];
int i = 0;
char characterToFind;
int counter = 0;

int main()
{
    printf("Enter a string :");
    fflush(stdin); fflush(stdout);
    fgets(text, sizeof(text), stdin);

    printf("Enter a character to find frequency :");
    fflush(stdin); fflush(stdout);
    scanf("%c", &characterToFind);

    for (i = 0; i < sizeof(text); i++)
    {
        if(text[i] == characterToFind)
        {
            counter++;
        }
    }

    printf("Frequency of %c  = %d",characterToFind, counter);

	return 0;
}



