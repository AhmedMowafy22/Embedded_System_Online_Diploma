/*
 * main.c
 *(write a c function that clears a specified bit in a given number(bit number starts from 0)
 * if not possible return the same number as is )
 *  Created on: Aug 26, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int clear(int n,int bit){
return n&=~(1<<bit);
}
int main(){
int n,bit;
printf("enter a number:");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
printf("bit position:");
fflush(stdin);fflush(stdout);
scanf("%d",&bit);
printf("result=%d",clear(n,bit));
}
