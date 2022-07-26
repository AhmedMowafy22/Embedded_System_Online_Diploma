/*
 * EX(4)_Insert_An_Element_In_Array.c
 *
 *  Created on: Jul 25, 2022
 *      Author: Ahmed Mowafy
 */


#include<stdio.h>
int main(){
	int n,i,x[30],ele,loca;
	printf("enter no of element: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d " , &x[i]);
	}
	printf("enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ele);
	printf("enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loca);
	for(i=n;i>=loca;i--)
	{
		x[i]=x[i-1];
	}
	n++;
	x[loca-1]=ele;
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
}
