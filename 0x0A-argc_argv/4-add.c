#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: returns 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int count, result;


	result = 0;
	if (argc > 1)
	{

		for (count = 1; count < argc; count++)
		{
			if (!isdigit(*argv[count]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[count]);
			}
		}

			printf("%d\n", result);
	}
	else
		printf("0\n");
	return (0);
}

