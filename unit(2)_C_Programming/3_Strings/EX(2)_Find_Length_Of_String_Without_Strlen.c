/*
 * EX(2)_Find_Length_Of_String_Without_Strlen.c
 *
 *  Created on: Jul 26, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main (){
	int i,count=0;
	char s[100];
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s);
	for(i=0;s[i]!='\0';++i)
	{
		++count;
	}
	printf("the length of string is :%d",count);
}
