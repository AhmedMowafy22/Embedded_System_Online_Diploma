/*
 * EX(3)_Reverse_String_Without_Using_Library_Function.c
 * (You can only use library function strlen(),to find the length of the string)
 *
 *  Created on: Jul 26, 2022
 *      Author: Ahmed Mowafy
 */

#include<stdio.h>
#include<string.h>
int main(){
	char s[100],temp;
	int i,j;

	printf("enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	i=0;
	j=strlen(s)-1;
	while(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;

	}
	printf("reverse string is : %s",s);
}
