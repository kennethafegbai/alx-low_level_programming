#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: parameter
 * Return: returns int
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i = 1;
	return (i + _strlen_recursion(s + 1));
}
