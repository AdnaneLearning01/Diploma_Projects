/*

 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: Adnan
 */

/* C Program takes n number of element from user ,
  stored data in an array and calculate the average */

#include <stdio.h>

int N = 0;
float sum = 0;
int i;


int main()
{
	printf("Enter the number of Data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &N);

	float User[N];

	for (i = 0; i < N; i++)
	{
		printf("%d. Enter number : ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &User[i]);
		sum = sum + User[i];
	}

	printf("Average : %0.2f",sum/N);



	return 0;
}
