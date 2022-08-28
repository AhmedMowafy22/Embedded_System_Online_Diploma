/*
 * main.c
 *(write a c function to return the index of last occurrence of a number in a given array)
 *  Created on: Aug 26, 2022
 *      Author: Computec
 */


#include <stdio.h>
int last_occurrence(int arr[],int size){
int get_key;
printf("enter the number you want to get its last occurrence: ");
fflush(stdin);fflush(stdout);
scanf("%d",&get_key);
for(int i=size;i>0;i--)
{
if(arr[i]==get_key)
return i+1;
}
return -1;
}

int main(){
int arr[100],size;
printf("enter size of array : ");
fflush(stdin);fflush(stdout);
scanf("%d",&size);
for(int i=0;i<size;i++){
    printf("enter element%d: ",i+1);
    fflush(stdin);fflush(stdout);
    scanf("%d",&arr[i]);
}

printf("last occurrence: %d",last_occurrence(arr,size));
}
