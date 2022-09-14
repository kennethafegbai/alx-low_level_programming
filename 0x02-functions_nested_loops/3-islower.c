#include "main.h"

/**
 * _islower - check for lower case
 * Return: Always 1 on success and 0 otherwise
 * @c: charater to check
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
