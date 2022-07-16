/*
 * EX(4)_Check_Number_Positive_Or_Negative.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 */

#include <stdio.h>
int main(int argc,char **argv)
{
	float x;
	printf("enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
		printf("%0.2f if positive.\n",x);
	}

	else if (x<0)
	{
		printf("%0.2f if negative.\n",x);

	}
	else
		printf("you entered zero");

	printf("enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
		printf("%0.2f if positive.\n",x);
	}

	else if (x<0)
	{
		printf("%0.2f if negative.\n",x);

	}
	else
		printf("you entered zero");
}

