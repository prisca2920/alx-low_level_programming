#include "lists.h"

/**
 * sum_listint - returns the sum
 * @head: first char to be checked
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *newnode = head;

	while (newnode != NULL)
	{
	sum += newnode->n;
	newnode = newnode->next;
	}

	return (sum);
}
