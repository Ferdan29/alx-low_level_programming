#include "main.h"

/**
 * print_rev - function that prints a string
 * @s: pointer variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int k;

	for (k = 0; s[k] != 0; k++)
	{
	}
	for (k = k - 1; k >= 0; k--)
		_putchar(s[k]);
	_putchar('\n');
}
