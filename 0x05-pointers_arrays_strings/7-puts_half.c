#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer variable
 */
void puts_half(char *str)
{
	int k = 0, l = 0, j;

	while (str[k++])
		l++;

	if ((l % 2) == 0)
		j = l / 2;

	else
		j = (l + 1) / 2;

	for (k = j; k < l; k++)
		_putchar(str[k]);

	_putchar('\n');
}

