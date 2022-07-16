/*
 * EX(5)_Check_Character_Alphabet_Or_Not.c
 *
 *  Created on: Jul 16, 2022
 *
 *      Author: Ahmed Mowafy

 */

#include <stdio.h>
int main(int argc,char **argv)
{
	char  c;
	printf("enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if (c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		printf("%c is an alphabet\n ",c);

	}
	else
	{

		printf("%C is not an alphabet\n ",c);
	}

	printf("enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if (c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
			printf("%c is an alphabet ",c);

	}
		else

	printf("%C is not an alphabet ",c);

}
