#include "main.h"

/**
 * _strspn - funtion that gets the length of a prefix substring.
 * @s: pointer variable
 * @accept: pointer variable
 *
 * Return: the length of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				j++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
