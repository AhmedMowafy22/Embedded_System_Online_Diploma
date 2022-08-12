/*
 * EX(3)_Reverse_Sentence_Using_Recursion.c
 *
 *  Created on: Aug 12, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
void reverse();
int main()
{
	printf("enter a sentence :");

	fflush(stdin);fflush(stdout);

	reverse();

}

void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
