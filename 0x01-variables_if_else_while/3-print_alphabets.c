/*
 * File: 3-print_alphabets.c
 * Auth: Ogunjale Feranmi Daniel
 */

#include <stdio.h>

/**
 * main - Print the alphabet in lower case, and then in upeer case.
 *
 * Return: Always 0.
 */
int main(void)
{
	char casez;

	for  (casez = 'a'; casez <= 'z'; casez++)
		putchar(casez);

	for (casez = 'A'; casez <= 'Z'; casez++)
		putchar(casez);

	putchar('\n');

	return (0);

