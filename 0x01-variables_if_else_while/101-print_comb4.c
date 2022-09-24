#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALWAYS 0 (SUCCESS)
 */

int main(void)
{
	int left, right, center;

	for (left = 48; left <= 57; left++)
	{
		for (center = left + 1; center <= 57; center++)
		{
			for (right = center + 1; right <= 57; right++)
			{
				putchar(left);
				putchar(center);
				putchar(right);
				if ((left == 55) && (center == left + 1) && (right == center + 1))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
