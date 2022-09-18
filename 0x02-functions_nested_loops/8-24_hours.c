#include "main.h"

/**
 * jack_bauer - prints every minute of the day (24 hours format)
 *
 */

void jack_bauer(void)
{
	int a1, a2;

	for (a1 = 0; a1 <= 23; a1++)
	{
		for (a2 = 0; a2 <= 59; a2++)
		{
		_putchar(a1 / 10 + '0');
		_putchar(a1 % 10 + '0');
		_putchar(':');
		_putchar(a2 / 10 + '0');
		_putchar(a2 % 10 + '0');
		_putchar('\n');
		}
	}
}
