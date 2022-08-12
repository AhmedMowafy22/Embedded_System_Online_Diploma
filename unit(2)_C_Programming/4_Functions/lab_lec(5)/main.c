/*
 * main.c
 *      Author: Ahmed Mowafy
 */


#include<stdio.h>

void output (int n)
{
	int i ,j;
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{

				printf(" %d",j);
			}
			printf("\n");
		}

}

int main()
{
	output(10);
}
