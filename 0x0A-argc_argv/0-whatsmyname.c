#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

