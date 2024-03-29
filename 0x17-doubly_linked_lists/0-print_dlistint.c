#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: the list to be checked
 * Return: the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
