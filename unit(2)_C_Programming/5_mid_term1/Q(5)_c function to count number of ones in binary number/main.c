/*
 * main.c
 *(c function to count number of ones in binary number)
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>

void countN(int n);

int main()
{
	int n;
	printf("input:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	countN(n);

}
void countN(int n)
{
	int count1=0;
	while(n>0){
		if(n&1){
			 count1++;
		}

		n=n>>1;
	}
	printf("output:%d",count1);

}

