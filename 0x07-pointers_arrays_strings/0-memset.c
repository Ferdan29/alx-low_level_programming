#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer variable
 * @b: pointer variable
 * @n: variable
 *
 * Return: return s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;

	return (s);
}
