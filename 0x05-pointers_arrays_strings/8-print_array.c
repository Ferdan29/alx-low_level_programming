#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array 
 * @a: pointer variable
 * @n: vaeiable
 */
void print_array(int *a, int n)
{
	int val;

	for (val = 0; val < n; val++)
	{
		printf("%d", a[val]);

		if (val == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
