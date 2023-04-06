#include "lists.h"

/**
 * insert_nodeint_at_index - new node at position
 * @head: parameter to be checked
 * @idx: first char
 * @n: second char
 * Return: address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	if (head == NULL && idx != 0)
	{
	return (NULL);
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;


	temp = *head;

	if (idx != 0)
	{
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
	temp = temp->next;
	}
	}

	if (idx == 0)
	{
	newnode->next = *head;
	*head = newnode;
	}

	else
	{
	newnode->next = temp->next;
	temp->next = newnode;
	}

	return (newnode);
}
