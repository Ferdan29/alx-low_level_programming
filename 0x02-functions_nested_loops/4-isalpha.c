#include "main.h"

/**
 * _isalpha - function that print both upper and lowercases
 * @c: The character to be checked.
 *
 * Return: 1 for both upper and lowercases, otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
