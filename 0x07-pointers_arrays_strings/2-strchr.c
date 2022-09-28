#include "main.h"

/**
 * _strchr - function  that locates a character in a string.
 * @s: pointsr variable
 * @c: variable to be check
 *
 * Return: if c is found, retirn a pointer
 * if c is not found, return null
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return ('\0');
}

