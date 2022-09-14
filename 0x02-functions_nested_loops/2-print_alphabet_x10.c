#include "main.h"

/**
 * print_alphabet_x10 - display alphabets 10 times
 */

void print_alphabet_x10(void){
	int i = 0;
	char l;

	while (i <= 9)
	{
	        for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		i++;
	}
}
