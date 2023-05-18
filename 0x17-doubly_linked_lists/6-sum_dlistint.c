#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data
 * @head: parameter to be checked
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
