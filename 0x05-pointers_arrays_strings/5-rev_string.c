#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char tmp;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
