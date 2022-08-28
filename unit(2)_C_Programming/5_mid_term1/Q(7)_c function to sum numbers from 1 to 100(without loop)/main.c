/*
 * main.c
 *(c function to sum numbers from 1 to 100(without loop))
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
void sumN(int n);
int main()
{
	int n=100;
	sumN(n);

}
void sumN(int n)
{
	int sum=0;
	sum=n*(n+1)/2;
	printf("%d",sum);
}
