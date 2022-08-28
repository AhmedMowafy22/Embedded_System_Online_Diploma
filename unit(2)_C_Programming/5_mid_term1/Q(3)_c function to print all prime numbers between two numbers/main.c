/*
 * c function to print all prime numbers between two numbers
 *
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */

#include<stdio.h>

int prime (int x);
int main()
{
	int x,y,i;
	printf("input:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("n1=%d,",x);

	printf("n2=%d-->",y);
	printf("output:");
	for (i=x;i<=y;i++){
		if(prime(i)){
			printf("%d ",i);
		}
	}
}

int prime (int x)
{
	int i;
	for (i=2;i<=x/2;i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}
