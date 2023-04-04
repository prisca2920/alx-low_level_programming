#include "lists.h"

/**
 * free_listint - frees a list
 * @head: first character
 * Return: 0 success
 */

void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
	newnode = head;
	head = head->next;
	free(newnode);
	}
}
