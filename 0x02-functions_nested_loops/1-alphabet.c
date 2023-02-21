#include "main.h"

/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/

void print_alphabet(void)
{
	int let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar(10);
}
