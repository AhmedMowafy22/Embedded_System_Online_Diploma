/*
 * main.c
 *(c function to return unique number in array with one loop)
 *  Created on: Aug 25, 2022
 *      Author: Ahmed Mowafy
 */


#include <stdio.h>

int main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;

	printf("Enter size of array : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &Size);

	printf("input  :  ");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}

	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

 	printf("output : ");
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] == 1)
  		{
  			printf("%d\t", arr[i]);
		}
  	}
 	return 0;
}
