#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer variable
 * @src: pointer variable
 * @n: varuable
 * Return: pointer to resulting
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (k = 0; src[k] != '\0' && n > 0; k++, n--, j++)
	{
		dest[j] = src[k];
	}

	return (dest);
}
