/*
 * EX(4)_Calculate_Power_Of_Number_Using_Recursion.c
 *
 *  Created on: Aug 12, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int power(int n,int p);
int main()
{
	int n,p;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Enter power number(positive number): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d=%d",n,p,power(n,p));
}
int power(int n,int p)
{
	if(p!=0)
	    return (n*power(n,p-1));

	else
		return 1;

}

