/*
 * main.c
 *(write a c function that reverse an input array)
 *  Created on: Aug 26, 2022
 *      Author: Ahmed Mowafy

*/

#include<stdio.h>
void reverse(int a[100], int n);
void main()
{
 int a[100], i, n;

 printf("input:");
 fflush(stdin);fflush(stdout);
 scanf("%d", &n);

 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i+1);
  fflush(stdin);fflush(stdout);
  scanf("%d", &a[i]);
 }
 reverse(a,n);
 printf("Reversed array is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }

}
void reverse(int a[10], int n)
{
 int i, temp;
 for(i=0;i< n/2;i++)
 {
  temp = a[i];
  a[i] = a[n-1-i];
  a[n-1-i] = temp;
 }
}
