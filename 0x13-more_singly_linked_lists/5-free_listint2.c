#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: character to be checked
 * Return: 0 success
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	while (*head != NULL)
	{
	newnode = *head;
	*head = (*head)->next;
	free(newnode);
	}

	*head = NULL;
}
