#include "main.h"

/**
 * print_to_98 - function that print numbers till 98.
 * @n: the character to be checked
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar(n);
		_putchar('\n');
	}
	else 
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar(n);
		_putchar('\n');
	}
}


