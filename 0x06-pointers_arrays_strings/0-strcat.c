#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: variable to be checked
 * @src: variable to be checked
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}

	dest[j] = '\0';
	return (dest);


}
