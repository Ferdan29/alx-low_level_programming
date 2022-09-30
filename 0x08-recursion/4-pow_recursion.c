#include "main.h"

/**
 * _pow_recursion - function that returns the value of x ^ y
 * @x: variable
 * @y: variable
 *
 * Return: -1 and result
 */
int _pow_recursion(int x, int y)
{
	int k = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
		return(1);
	k *= _pow_recursion(x, y - 1);
	return (k);
}
