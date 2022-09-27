#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer variable to the buffer
 * @src: pointer variable
 * @n: variable to be checked
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; n++)
		dest[k] = src[k];

	return (dest);
}
