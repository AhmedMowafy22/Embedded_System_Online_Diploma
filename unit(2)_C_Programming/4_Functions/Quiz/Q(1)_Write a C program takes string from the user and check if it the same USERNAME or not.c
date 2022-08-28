/*
 * main.c
 *(Write a C program takes string from the user and check if it the same USERNAME or not)
 *  Created on: Aug 26, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main(){
char arr1[100],arr2[100];
printf("enter the string:");
fflush(stdin);fflush(stdout);
gets(arr1);
printf("enter the username:");
fflush(stdin);fflush(stdout);
gets(arr2);

if(strcmp(arr1,arr2)==0)
printf("the same");
else
printf("not the same");
}
