/*
 * File: 3-islower.c
 * Auth: Ogunjale Feranmi
 */

#include "main.h"

/**
 * _islower - a function that check lower case character
 * @c: the character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
