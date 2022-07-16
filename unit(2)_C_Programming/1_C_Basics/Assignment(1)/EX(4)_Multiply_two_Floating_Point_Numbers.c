/*
 * EX(4)_Multiply_two_Floating_Point_Numbers.c
 *
 *  Created on: Jul 16, 2022
 *
 *      Author: Ahmed Mowafy
 *
 */


#include <stdio.h>

int main()
{
	float x,y,multiply;
	printf("enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	multiply =x*y;
	printf("product:%f",multiply);
}
