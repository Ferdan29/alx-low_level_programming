#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be reverse
 */
void rev_string(char *s)
{
	int p = 0;
	int j = 0;
	char ted;

	while (s[p++])
		j++;

	for (p = j - 1; p >= j / 2; p--)
	{
		ted = s[p];
		s[p] = s[j - p - 1];
		s[j - p - 1] = ted;
	}
}
