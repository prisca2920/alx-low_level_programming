#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: parameter to be checked
 * @n: int to be checked
 * Return: address or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	if (head == NULL)
	{
	return (NULL);
	}

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
	return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	newnode->prev = NULL;
	return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}

