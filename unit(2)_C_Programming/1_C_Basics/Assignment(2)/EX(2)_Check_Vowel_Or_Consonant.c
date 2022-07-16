/*
 * EX(2)_Check_Vowel_Or_Consonant.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main(int argc,char **argv)
{
	char c;
	printf("enter an alphabet :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u')
	{
		printf("%c is vowel\n",c);

	}
	else if(c=='A'||c=='I'||c=='E'||c=='O'||c=='u')
	{
		printf("%c is vowel\n",c);
	}
	else
		{
		printf("%c is consonant\n",c);
		}

	printf("enter an alphabet :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&c);
		if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u')
			{
				printf("%c is vowel\n",c);

			}
			else if(c=='A'||c=='I'||c=='E'||c=='O'||c=='u')
			{
				printf("%c is vowel\n",c);
			}
			else
				{
				printf("%c is consonant\n",c);
				}
}
