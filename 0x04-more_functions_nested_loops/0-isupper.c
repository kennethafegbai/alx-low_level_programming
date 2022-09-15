#include "main.h"
/**
 * _isupper - check if letter is uppercase
 * @c: arguement value
 * Return: returns 1 (success) if true; otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
