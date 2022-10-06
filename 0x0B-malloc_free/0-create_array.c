#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of mallac
 * @c: the content of c
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		p[i];
	}
	return (p);
	free(p);
}
