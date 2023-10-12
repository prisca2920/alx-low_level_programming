#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: the head of the list
 * @n: the integer in the list
 * Return: the node at the end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
