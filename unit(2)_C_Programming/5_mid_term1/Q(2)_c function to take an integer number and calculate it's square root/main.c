/*
 * c_function_take_integer_number_and_calculate_it's_square_root.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
#include <math.h>
double SquareRoot(double n);
int main ()
{
	int n;
	double res;
	printf("input-->");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	res=SquareRoot( n);
	printf("output :%0.3lf",res);

}
double SquareRoot(double n)
{
	return sqrt(n);
}
