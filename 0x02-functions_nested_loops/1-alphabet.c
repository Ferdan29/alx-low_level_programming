#include "main.h"

/**
 * main - print all alphabet from a to z in lower case
 *
 *Return: 0.
 */

void print_alphabet(void)
{
	int j = 'a';

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
