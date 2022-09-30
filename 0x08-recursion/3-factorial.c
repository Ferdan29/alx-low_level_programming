#include "main.h"

/**
 * factorial - functionthat returns the factorial of a given number.
 * @n: varible with the value
 *
 * Return: -1, 1 and result
 */
int factorial(int n)
{
	int res;
	
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		factorial(n) = 1;
		res = 1;
	}
	else
		res = n * factorial(n-1);

	return (res);
}
