/*
 * main.c
 *(c function to take an array and revers its elements)
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
*/

#include<stdio.h>
void rev(int arr[100],int size);
int main()
{
	int arr[100],size,i;
	printf("enter size of array:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	printf("enter elements of array:");
	fflush(stdin);fflush(stdout);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("output:");
	rev(arr,size);
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
}

void rev(int arr[100],int size)
{
	int i,temp;
	for(i=0;i<size/2;i++){
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}

}
