/*
 * File: 4-print_alphabt.c
 * Auth: Ogunjale Feranmi Daniel
 */

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char casez;

	for (casez = 'a'; casez <= 'z'; casez++)
	{
		if (casez != 'e'e && casez != 'q')
			putchar(casez);
	}

	putchar('\n');

	return (0);
}
