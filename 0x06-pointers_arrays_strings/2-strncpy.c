#include "main.h"

/**
 * _strncpy - work exactly like strncpy
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: Return a pointer to the resulting string dest
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);
}
