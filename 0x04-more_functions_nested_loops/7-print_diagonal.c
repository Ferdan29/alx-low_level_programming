#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: character to be checked
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j;
	int k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (j == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
