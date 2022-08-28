/*
 * main.c
 *(c function to count the max number of ones between two zeros)
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>
int MaxOne(int n);
int count=0,max=0;
int main() {
	int n = 0;
	printf("input: ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &n);
	printf("output: %d", MaxOne(n));

	return 0;
}


int MaxOne(int  n){

	if(n == 0){
		if(count > max){
			max = count;
		}
		return 0;
	}

	if((n%2) == 0){
		if(count > max){
			max = count;
		}
		count = 0;
	}

	if((n%2) == 1)
		count++;

	MaxOne(n/2);
	return max;
}
