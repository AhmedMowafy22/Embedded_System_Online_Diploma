/*
 * EX(1)_Multidimensional_array.c

 * (write c program to find sum of two matrix of order 2*2 using multidimensional array
   where,elements of matrix are entered by user.)

 *  Created on: Jul 25, 2022

 *      Author: Ahmed Mowafy
 */

#include <stdio.h>
int main(){
	float a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a(%d,%d): ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);

		}
	}
	printf("enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter b(%d,%d): ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);

		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%0.1f   ",c[i][j]);
		}
		printf("\n");
	}

}
