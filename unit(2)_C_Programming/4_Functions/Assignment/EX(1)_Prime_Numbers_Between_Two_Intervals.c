/*
 * Prime_Numbers_Between_Two_Intervals.c

 * (prime numbers between two intervals by making user defined function)

 *  Created on: Aug 12, 2022
 *      Author: Ahmed Mowafy
 */


#include<stdio.h>
int prime (int num);
int main()
{
	int x,y,f,j;
	printf("enter two numbers(intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("prime numbers between %d and %d are:",x,y);
	for(j=x;j<y;j++)
	{
		f= prime(j);
		if(f==0)
			printf(" %d ",j);
	}
}

int prime (int num){
	int f,i;
	f=0;
	for(i=2;i<=num/2;i++){

		if(num%i==0){
			f=1;
			break;
		}
	}
	return f;
}
