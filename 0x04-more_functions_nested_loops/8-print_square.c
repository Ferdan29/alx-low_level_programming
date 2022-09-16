#include "main.h"

/**
 * print_square - function that prints a square
 * @size: variable to be checked
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int j, k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
