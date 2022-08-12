/*
 * EX(2)_Calculate_Factorial_Using_Recursion.c
 *
 *  Created on: Aug 12, 2022
 *      Author: Ahmed Mowafy
 */

#include <stdio.h>
int factorial (int x);
int main()
{
	int x;
	printf("enter an positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	printf("Factorial of %d = %d",x,factorial(x));
}
int factorial (int x)
{
	if(x>=1)
		return x*factorial(x-1);
	else
		return 1;
}
