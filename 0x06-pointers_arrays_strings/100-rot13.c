#include "main.h"

/**
 * rot13 - encode a str a string string rot13.
 * @str: parameter
 * Return: return char
 */

char *rot13(char *str)
{
int count = 0, i;
char alphabet[] = "abcdefghijklmnopqrstrtuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstrtuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(str + count) != '\0')
{
	for (i = 0; i < 52; i++)
	{
		if (*(str + count) == alphabet[i])
		{
			*(str + count) = rot13[i];
			break;
		}
	}
	count++;
}

return (str);
}

