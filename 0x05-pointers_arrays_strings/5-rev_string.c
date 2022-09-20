#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: parameter
 */

void rev_string(char *s)
{
	int i, full_string, half_string;

	char first_letter, last_letter;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	full_string = i - 1;
	half_string = full_string / 2;
	while (half_string >= 0)
	{
		first_letter = s[full_string - half_string];
		last_letter = s[half_string];
		s[half_string] = first_letter;
		s[full_string - half_string] = last_letter;
		half_string--;
	}
}
