/*
 * EX(1)_Find_Frequency_Of_Characters_In_String.c
 * (this program asks user to enter a string and a character and this program check how many
    times that character is repeated in the string entered by user)
 *
 *  Created on: Jul 26, 2022
 *      Author: Ahmed Mowafy
 */


#include<stdio.h>
int main(){
	char s[100],c;
	int i,count=0;
	printf("enter a string:  ");
	fflush(stdin);fflush(stdout);
	gets(s);
	printf("enter a character to find frequency:  ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	for(i=0;s[i]!='\0';i++){
		if(c==s[i])
		{
			++count;
		}
	}
	printf("frequency of %c=%d",c,count);
}
