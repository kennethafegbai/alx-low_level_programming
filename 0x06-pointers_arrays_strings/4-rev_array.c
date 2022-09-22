#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be passed
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int *start, *end, item, i, j;

	start = a;
	end = a;

	i = 0;

	while (i < n - 1)
	{
		end++;
		i++;
	}

	j = 0;

	while (j < n / 2)
	{
		item = *end;
		*end = *start;
		*start = item;

		start++;
		end--;
		j++;
	}
}

