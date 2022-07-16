/*
 * EX(8)_Calculator_Add_Subtract_Multiply_Divide.c
 *
 *(USING SWITCH CASE)
 *
 *  Created on: Jul 16, 2022
 *
 *      Author: Ahmed Mowafy
 */



#include <stdio.h>
int main(int argc,char **argv)
{
	char c;
	float x,y,add,sub,multi,div;
	printf("enter operator either (+) or (-) or (*) or (divide): ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("enter two operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);

	switch(c)
	{

	case '+':
	{
		add=x+y;
				printf("%0.1f + 0.1%f = %0.1f ",x,y,add);
	}
	break;

	case '-':
	{
		sub=x-y;
				printf("%0.1f - %0.1f = %0.1f ",x,y,sub);
	}
	break;

	case '*':
	{
		multi=x*y;
				printf("%0.1f * %0.1f = %0.1f",x,y,multi);
	}
	break;

	case '/':
	{
		div=x/y;
				printf("%0.1f / %0.1f = %0.1f ",x,y,div);
	}
	break;

	default:
		printf("wrong choice");
		break;
	}




}
