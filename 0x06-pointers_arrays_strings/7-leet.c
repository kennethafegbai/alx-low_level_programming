#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: return char
 */

char *leet(char *str)
{
	int count, i;

	count = 0;

	int low_cases[5];
	int up_cases[5];
	int numbers[5];

	low_cases[0] = 97;
	low_cases[1] = 101;
	low_cases[2] = 111;
	low_cases[3] = 116;
	low_cases[4] = 108;

	up_cases[0] = 65;
	up_cases[1] = 69;
	up_cases[2] = 79;
	up_cases[3] = 84;
	up_cases[4] = 76;

	numbers[0] = 52;
	numbers[1] = 51;
	numbers[2] = 48;
	numbers[3] = 55;
	numbers[4] = 49;

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == low_cases[i] || *(str + count) == up_cases[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
