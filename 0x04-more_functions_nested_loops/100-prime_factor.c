#include <stdio.h>

/**
 * main - prints largest prime factor of a numbe
 * Return: returns 0
 */

int main(void)
{
	long int num = 612852475143;

	int large = 0;

	int i;

	for (i = 2; num != 1; i++)
	{
		while (num % i == 0)
		{
			num /= i;
			large = i;
		}
	}
	printf("%d", large);
	printf("\n");
	return (0);
}
