/*
 * main.c
 *(write a c function that return 0 if a given number is a power of 3 otherwise return1(except 3 to the power0))
 *  Created on: Aug 26, 2022
 *      Author: Computec
 */


#include<stdio.h>
#include <math.h>
int checkpowerof3(unsigned n)
{
double i=log(n)/log(3);

return i==trunc(i);
}
int main(){
unsigned n;
printf("enter a number :");
 fflush(stdin);fflush(stdout);
scanf("%d",&n);
checkpowerof3(n)? printf("%d ==>0",n):printf("%d==>1",n);
}
