/*
 * c_function_to_take_number_and_sum_all_digits.c
 *
 *  Created on: Aug 24, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int sum(int n);

int main ()
{
	int n,res;
	printf("input-->");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	res=sum(n);
	printf("%d",res);

}
int sum(int n)
{
	if(n!=0)
		return (n%10 +sum(n/10));
	else
		return 0;
}

