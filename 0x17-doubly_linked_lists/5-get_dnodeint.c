#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: parameter to be checked
 * @index: int to be checked
 * Return: index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node;
	unsigned int count = 0;

	nth_node = head;

	while (nth_node != NULL)
	{
	if (count == index)
	return (nth_node);

	count++;
	nth_node = nth_node->next;
	}

	return (NULL);
}
