#include <stdio.h>

/**
 * main - Entry point
 * Return: Akways return 0 (Success)
 */

int main(void)
{
	char num, alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
