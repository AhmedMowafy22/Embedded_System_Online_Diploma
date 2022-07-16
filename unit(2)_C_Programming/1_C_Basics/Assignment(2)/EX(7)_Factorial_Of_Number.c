/*
 * EX(7)_Factorial_Of_Number.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main(int argc,char **argv)
{
	int n, i,fact=1 ;
	printf("enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	if (n>0)
	{
		for(i=1;i<=n;++i)
		{
			fact*=i;
		}
		printf("factorial =%d\n",fact);
	}
	else if(n<0)
	{
		printf("ERROR!! Factorial of negative number does't exist\n");
	}

	printf("enter an integer :\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);

		if (i>0)
		{
			for(i=1;i<=n;i++)
			{
				fact*=i;
			}
			printf("factorial =%d\n",fact);
		}
		else
			printf("ERROR!! Factorial of negative number does't exist");
}
