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
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	p = malloc(sizeof(*p) * (i +1));

	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		p = str[j];

	return (p);

	free(p);
}
