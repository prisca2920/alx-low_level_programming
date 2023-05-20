#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given pos
 * @h: first int
 * @idx: second int
 * @n: third int
 * Return: ddress or 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
	{
	return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if ((*h == NULL) && (idx == 0))
	{
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *h;
	newnode = *h;

	return (newnode);
	}

	temp = *h;

	for(i = 0; i <= idx - 1; i++)
	{
	while ((temp->next != NULL) && (idx != 0))
	{
	temp = temp->next;
	temp->next = newnode;
	newnode->n = n;
	newnode->prev = temp;
	}
	
	}
	return (newnode);
}
	
	
