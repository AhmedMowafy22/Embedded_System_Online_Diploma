/*
 * main.c
 *(write a c program for swapping two arrays"A&B"with different lengths)
 *  Created on: Aug 26, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int main(){
int a[10],b[10],c[10],i;
printf("enter first array: ");
fflush(stdin);fflush(stdout);
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("enter second array: ");
fflush(stdin);fflush(stdout);
for(i=0;i<5;i++){
scanf("%d",&b[i]);
}
printf("array before swapping\n");
printf("first array\t");
for(i=0;i<10;i++){
printf("\t%d",a[i]);
}
printf("\nsecond array\t");
for(i=0;i<5;i++){
printf("\t%d",b[i]);
}
for(i=0;i<10;i++){
c[i]=a[i];
a[i]=b[i];
b[i]=c[i];
}
printf("\narray after swapping");
printf("\nfirst array\t");
for(i=0;i<5;i++){
printf("\t%d",a[i]);
}
printf("\nsecond array\t");
for(i=0;i<10;i++){
printf("\t%d",b[i]);
}
}
