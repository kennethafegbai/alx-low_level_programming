#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n x tables
 * @n: arguement value
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	/*
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("0");
	}
	printf("\n");*/
	int i, j;
	for (i = 0; i <= n; i++)
	{
	/*	printf("%4d", i);*/
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
			if ((i * j) == (n * n))
				break;
			printf(",");
		}
		printf("\n");
	}
}
