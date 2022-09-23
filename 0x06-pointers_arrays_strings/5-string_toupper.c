#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: variable
 * Return: c
 */

char *string_toupper(char *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] > 96 && c[j] < 123)
		{
			c[j] -= 32;
		}
	}
	return (c);
}
