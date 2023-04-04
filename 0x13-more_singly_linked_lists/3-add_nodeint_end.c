#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: first char to be checked
 * @n: second char
 * Return: NULL or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	if (head == NULL)
	{
	return (NULL);
	}

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
	return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
