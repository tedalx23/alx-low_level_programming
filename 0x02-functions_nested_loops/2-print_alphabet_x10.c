#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int let, i;

	for (i = 0; i < 10; i++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
	 _putchar('\n');
	}
}
