#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * @head: first char
 * @index: second char
 * Return: 1 success -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *newnode;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);
	return (1);
}
