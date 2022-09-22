#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: parameter one
 * @s2: parameter two
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	char *str_1, *str_2;

	str_1 = s1;
	str_2 = s2;

while (*str_1 != '\0' && *str_2 != '\0' && *str_1 == *str_2)
{
	str_1++;
	str_2++;
}
return (*str_1 - *str_2);
}
