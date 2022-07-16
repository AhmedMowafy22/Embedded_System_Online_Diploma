/*
 * EX(3)_Largest_Number_Among_Three_Numbers.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 */



#include <stdio.h>
int main(int argc,char **argv)
{
	float a,b,c;
	printf("enter three number:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if (a>b&&a>c)
	{
		printf("the largest number =%0.2f",a);
	}
	else if (b>a&&b>c)
		{
			printf("the largest number =%0.2f",b);
		}
	else if (c>b&&c>a)
		{
			printf("the largest number =%0.2f\n",c);

		}

}
