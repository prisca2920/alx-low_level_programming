#include "lists.h"

/**
 * add_nodeint - adds node at beginning
 * @head: first int
 * @n: second int
 * Return: address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
	return (NULL);
	}

	else
	{
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	}
	return (newnode);
}
