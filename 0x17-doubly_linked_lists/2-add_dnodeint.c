#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the head of a list
 * @n: the integer
 * Return: a new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	}
	return (newnode);
}
