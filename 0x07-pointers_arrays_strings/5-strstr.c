#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer variable
 * @needle: pointer variable
 *
 * Return: return needle
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		for (k = 0; needle[k]; k++)
		{
			if (haystack[k] == needle[k])
			{
				if (needle[k + 1] == '\0')
					return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
