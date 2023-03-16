#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccat;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	ccat = malloc(sizeof(char) * (l + 1));

	if (ccat == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		ccat[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ccat[l++] = s2[i];

	ccat[l] = '\0';

	return (ccat);
}
