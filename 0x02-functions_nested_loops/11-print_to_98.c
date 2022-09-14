#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers up to 98
 * @n: arguement to pass
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
