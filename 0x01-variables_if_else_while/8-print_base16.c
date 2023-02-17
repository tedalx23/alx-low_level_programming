#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hx;

	for (hx = '0'; hx <= '9'; hx++)
	{
		putchar(hx);
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	putchar('\n');
	return (0);
}
