#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head parameter to be checked
 * Return: 0 or an int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
	n = (*head)->n;	
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}

	return (n);
}
