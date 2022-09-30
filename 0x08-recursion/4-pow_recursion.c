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
	int j = 0, k = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (j < y)
	{
		k *= _pow_recursion(x, y);
		j++;
	}
	return (k);
}
