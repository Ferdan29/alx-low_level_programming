#include "main.h"

/**
 * print_last_digit - function that print last digit
 * @h: The integer to be checked
 *
 * Return: 0 or 1.
 */
int print_last_digit(int h)
{
	int last_digit = h % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
