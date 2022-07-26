/*
 * EX(3)_Find_Transpose_Of_Matrix.c
 *(this program asks user to enter a matrix (size of matrix is specified by user)
   and this program finds the transpose of that matrix and displays it.)

 *  Created on: Jul 25, 2022
 *
 *      Author: Ahmed Mowafy
 */

#include <stdio.h>
int main(){
	int a[10][10],tranpose[10][10],r,c,i,j;
	printf("enter rows and column of the matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);

	printf("enter elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter elements a(%d,%d):",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);

		}
	}
	printf("entered matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);

		}
		printf("\n");
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tranpose[j][i]=a[i][j];
		}

	}
	printf("transpose of matrix:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",tranpose[i][j]);
		}
		printf("\n");
	}
}
