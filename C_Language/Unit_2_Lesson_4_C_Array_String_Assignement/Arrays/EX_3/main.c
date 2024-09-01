/*

 * main.c
 *
 *  Created on: Aug 27, 2024
 *      Author: Adnan
 */


/* C Program to ask user to enter a matrix and this program
 * finds the transpose of that matrix and display it */

#include <stdio.h>

int R = 0;
int C = 0;
int i,j;


int main()
{
	printf("Enter the rows and the column of the matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&R, &C);

	int M[R][C];
	int T[C][R];

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &M[i][j]);
		}
	}

    printf("Entered Matrix : \n");
	for (i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			printf("%d \t", M[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			T[j][i] = M[i][j];
		}
	}

	printf("Transposed Matrix : \n");
	for (i = 0; i < C; i++)
	{
		for(j = 0; j < R; j++)
		{
			printf("%d \t", T[i][j]);
		}
		printf("\n");
	}


	return 0;
}


