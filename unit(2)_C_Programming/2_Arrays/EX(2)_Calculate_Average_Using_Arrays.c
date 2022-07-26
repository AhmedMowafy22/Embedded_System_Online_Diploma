/*
 * EX(2)_Calculate_Average_Using_Arrays.c
 * (this program take n number of element from user(where n is specified by user),stores data
 	in an array and calculates the average of those numbers.)
 *
 *  Created on: Jul 25, 2022
 *      Author: Ahmed Mowafy
*/

#include <stdio.h>
int main()
{
	int n,i;
	float average,sum,x[50];
	printf("enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while (n>50 || n<=0)
	{
		printf("error,the number should in range of(1 to 50)\n");
		printf("enter number again :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
	}

	for(i=0;i<n;i++)
	{
		printf("%d.enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&x[i]);
		sum+=x[i];

	}
	average=sum/n;
	printf("average= %0.2f",average);
}
