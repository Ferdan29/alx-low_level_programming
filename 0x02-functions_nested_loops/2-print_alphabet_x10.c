#include "main.h"

/**
 * print_alphabet_x10 - function for alphabet inten rows.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}

