#include "main.h"

/**
 * print_square -print square
 * @size: parameter value
 */

void print_square(int size)
{

	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
			_putchar('#');
			}
			/*_putchar('#');*/
			_putchar('\n');
		}
	}
}

