#include "main.h"

/**
 * _strlen - function that returns the length
 * of a tring.
 * @str: pointer variable:
 *
 * Return: l
 */

size_t _strlen(const char *str)
{
	size_t l = 0;

	while (*str++)
		l++;

	return (l);
}
