#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: first parameter
 * @n: char to be checked
 * Return: address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
	return (NULL);
	}

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
	return (NULL);
	}

	else
	{
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;
	*head = newnode;
	}

	return (newnode);
}
