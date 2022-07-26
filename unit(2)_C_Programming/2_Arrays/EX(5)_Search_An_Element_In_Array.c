/*
 * EX(5)_Search_An_Element_In_Array.c
 *
 *  Created on: Jul 26, 2022
 *      Author: Ahmed Mowafy
 */


#include<stdio.h>
int main(){
	int n,i,x[100],s;
	printf("eneter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("eneter the element to be searched: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&s);
		i=0;
		while(i<n&&s!=x[i])
		{
			i++;
		}
		if(i<n)
		{
			printf("number found at the location=%d",i+1);
		}
		else
			printf("number not found");
}


