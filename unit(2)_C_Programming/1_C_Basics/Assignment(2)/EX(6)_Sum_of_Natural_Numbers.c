/*
 * EX(6)_Sum_of_Natural_Numbers.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 *
 */


#include <stdio.h>
int main(int argc,char **argv)
{
	int i ,n,sum=0;
	printf("enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		sum+=i;


	}
	printf("sum=%d",sum);
}


