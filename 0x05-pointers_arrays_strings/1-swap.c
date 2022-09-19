#include "main.h"

/**
 * swap_int - function that swaps the value
 * of two integers.
 * @*a: pointer var
 * @*b: pointer var
 * @a: variable
 * @b: variable
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
