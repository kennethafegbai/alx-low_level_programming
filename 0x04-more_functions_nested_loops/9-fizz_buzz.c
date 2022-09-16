#include <stdio.h>

/**
 * main -print fizz, buzz, fizzbuzz in between numbers to 100
 */

void main(void)
{

for (int i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d", i);
	/**
	 * if (i == 100)
	 *	break;
	 */
	printf(" ");
}
printf("\n");
}
