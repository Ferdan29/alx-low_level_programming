#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t.
 * @h: pointer to head.
 * Return: numbers of modes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
