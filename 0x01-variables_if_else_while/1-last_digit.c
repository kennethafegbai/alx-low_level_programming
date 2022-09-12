#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int n, result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	result = n % 10;
	if (result > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, result);	
	}
	else if (result == 0)
	{
	printf("Last digit of %d is %d and is 0", n, result);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, result);
	}
	return (0);
}
