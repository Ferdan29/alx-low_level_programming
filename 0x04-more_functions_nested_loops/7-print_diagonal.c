#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: character to be checked
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j = 0;
	int k = 0;

	if (n > 0)
	{
		while (j < n)
		{
			while (k < n)
			{
				_putchar(' ');
				k++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	_putchar('\n');
}
