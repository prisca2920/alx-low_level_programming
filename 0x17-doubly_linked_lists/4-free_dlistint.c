#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the list to be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head != NULL)
	{
	newnode = head;
	head = head->next;
	free(newnode);
	}
}
