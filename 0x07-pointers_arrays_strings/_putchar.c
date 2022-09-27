#include "main.h"
#include "unistd.h"

/**
 * _puchar - fumction yhat print out the ouput
 * @c: variable to ne checked
 *
 * Return: 1 on success otherwise return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
