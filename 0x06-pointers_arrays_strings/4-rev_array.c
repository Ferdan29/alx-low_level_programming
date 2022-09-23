#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: pointer variable
 * @n: variable
 * Return: reverse of the element
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < (n / 2); j++)
	{
		k = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = k;
	}
}
