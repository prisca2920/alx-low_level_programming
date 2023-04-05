#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: first char to be checked
 * @index: second int to be checked
 * Return: NULL or the  node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newnode;
	unsigned int count = 0;

	newnode = head;

	while (newnode != NULL)
	{
	if (count == index)
	return (newnode);

	count++;
	newnode = newnode->next;
	}

	return (NULL);
}
