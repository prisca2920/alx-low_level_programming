#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: parameter to be checked
 * Return: 0 success
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head != NULL)
	{
	newnode = head->next;
	free(head);
	head = newnode;
	}
}
