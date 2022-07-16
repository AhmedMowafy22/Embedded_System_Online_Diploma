/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Computec
 */


#include <stdio.h>
int main(int argc,char**argv)
{
	int i ,j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{

			printf(" %d",j);
		}
		printf("\n");
	}
}
