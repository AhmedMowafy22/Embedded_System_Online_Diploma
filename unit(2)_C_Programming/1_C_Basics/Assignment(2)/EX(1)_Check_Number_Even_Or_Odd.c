/*
 * EX(1)_Check_Number_Even_Or_Odd.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 */

#include <stdio.h>
int main(int argc,char **argv)
{
	int x ,y;
	printf("enter  an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	if(x%2==0)
	{
		printf("%d is even\n",x);
	}

	else if(x%2!=0)
	{
		printf("%d is odd\n",x);
	}
	printf("enter  an integer you want to check:");
	fflush(stdin);fflush(stdout);
		scanf("%d",&y);
		if(y%2==0)
		{
			printf("%d is even\n",y);
		}

		else if (y%2!=0)
		{
			printf("%d is odd\n",y);
		}

}
