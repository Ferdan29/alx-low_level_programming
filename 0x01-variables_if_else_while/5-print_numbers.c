/*
 * File:5-print_numbers.c
 * Auth; Ogunjale feranmi daniel
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	       printf("%d", numb);

	printf("\n");

	return (0);
}


