#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * @dest: parameter one
 * @src: parameter two
 * Return: Returns a pointer to the resulting string destReturns
 * a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
