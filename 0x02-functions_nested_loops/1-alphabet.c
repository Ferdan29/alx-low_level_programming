#include "main.h"

/**
 * print_alphabet - function to print all letters 
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
