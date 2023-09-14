#include "lists.h"

/**
 * sum_dlistint - calc the sum of all data n in DLL
 * @head: the head of DLL
 * Retrun: the sum of all n DLL
 */

int sum_dlistint(dlistint_t *head)
{
	int	sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
