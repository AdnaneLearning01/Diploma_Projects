/*

 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: Adnan
 */

/* C Program to Find Sum of Two Matrix of Order 2*2 */

#include <stdio.h>

int i = 0;
int j = 0;
float Matrix_1[2][2];
float Matrix_2[2][2];
float sum[2][2];

int main()
{
	printf("Enter the element of the 1st Matrix : \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f", &Matrix_1[i][j]);
			fflush(stdin);fflush(stdout);
		}
	}

	printf("Enter the element of the 2nd Matrix : \n");
	for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("Enter a%d%d : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f", &Matrix_2[i][j]);
				fflush(stdin);fflush(stdout);
			}
		}

	for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					sum[i][j] = Matrix_1[i][j] + Matrix_2[i][j];
				}
			}

	printf("Sum of Matrix : \n");
	for (i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%0.2f \t", sum[i][j]);
		}
		printf("\n");
	}





	return 0;
}


