/*
 * EX(2)_Print_Integer_Entered_by_User.c
 *
 *  Created on: Jul 16, 2022
 *
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main (int argc,char **argv)
{
	int x;
	printf("enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("you entered:%d",x);


}
