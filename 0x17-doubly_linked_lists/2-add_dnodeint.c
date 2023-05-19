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

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL || head == NULL)
	{
	return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
	newnode->next = *head;
	*head = newnode;

	return (newnode);
	}


	else
	{
	while((*head)->prev != NULL)
	{
	*head = (*head)->prev;
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	}
	return (newnode);
}
