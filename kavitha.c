/*
 * aaaaaa.c
 *
 *  Created on: 10-Jun-2019
 *      Author: supremology
 */
#include<stdio.h>

#include"com_stack.h"



int main()
{
	int i;

	if(MSB_FIRST==0)
	{
	int a[10]={1,2,4,6,7};

	for(i=0;i<3;i++)
	{
		printf("%d\n",a[i]);


	}
	}
	else
	{
		printf("%d\n",FALSE);
	}

	/*
	if(MSB_FIRST==0)
	printf("true\n");
	else
		printf("false\n");*/
	return 0;
}

