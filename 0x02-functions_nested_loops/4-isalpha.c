#include "main.h"

/**
 * _isalpha - checks if is alphabet
 * Return: Always 1 on success, otherwise 0
 * @c: character to check
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
