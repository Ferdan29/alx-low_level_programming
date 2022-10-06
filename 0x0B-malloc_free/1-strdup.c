#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *           space in memory.
 * @str: character to be checked.
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(*p) * 1);

	if (p == NULL)
		return (NULL);

	return (p);

	free(p);
}
