#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list to be checked
 * @idx: the list where new node should be added
 * @n: the data to add
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *newnode;
	unsigned int i = 0;

	if (idx == 0)
	{
	return (add_dnodeint(h, n));
	}

	current = *h;

	while (i < idx - 1)
	{
	if (!current)
	{
	return (NULL);
	}

	current = current->next;
	i++;
	}

	if (!current->next)
	{
	return (add_dnodeint_end(h, n));
	}

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
	return (NULL);
	}

	newnode->n = n;
	newnode->next = current->next;
	newnode->prev = current;
	current->next->prev = newnode;
	current->next = newnode;

	return (newnode);
}
