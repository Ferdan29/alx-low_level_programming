#include "main.h"

/**
 * print_most_numbers - function that print some sequence
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char j = '0';

	while (j <= '9')
	{
		if (j != '2' && j != '4')
		{
			_putchar(j);
		}
		j++;
	}
	_putchar('\n');
}
