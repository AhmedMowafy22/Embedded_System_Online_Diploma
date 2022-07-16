/*
 * EX(6)_Swap_Two_Numbers.c
 *
 *  Created on: Jul 16, 2022
 *
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main (int argc,char **argv)
{
	float a ,b,c;
	printf("enter value of a :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);

	printf("enter value of b :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	c=a;
	a=b;
	c=b;

	printf("after swapping,value of a:%.2f\n",b);
	printf("after swapping,value of b:%.1f",a);



}
