#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: pointer string
 */
void puts2(char *str)
{
	int val = 0, p = 0;

	while (str[val++])
		p++;

	for (val = 0; val < p; val += 2)
		_putchar(str[val]);

	_putchar('\n');
}
