#include "main.h"

/**
 * print_times_table - function that print time table
 * @n: the variable to be checked
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int k, j, p;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar('0');
		
			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				p = k * j;

				if (p < 99)
					_putchar(' ');
				if (p < 9)
					_putchar(' ');

				if (p > 100)
				{
					_putchar((p / 100) + '0');
					-putchar(((p / 10) % 10) + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');			
			}
			_putchar('\n');
		}
	}
}

