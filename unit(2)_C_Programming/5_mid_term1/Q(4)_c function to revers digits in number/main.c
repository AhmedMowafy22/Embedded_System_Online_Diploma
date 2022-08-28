/*
 * main.c
 *(c function to revers digits in number)
 *  Created on: Aug 25, 2022
 *
 *      Author:Ahmed Mowafy
 */


#include <stdio.h>
int reverse (int n);
int main()
{
	int n;
	printf("input:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("output:%d",reverse(n));

}
int reverse(int n)
{
	int rev=0;
	while(n>0){
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
