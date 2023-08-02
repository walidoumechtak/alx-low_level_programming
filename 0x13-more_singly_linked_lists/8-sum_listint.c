#inlcude "lists.h"

/**
 * sum_listint - sum of all n in linkedlist
 * @head: the head of linked list
 * Return: the sum of n data(s)
 */

int sum_listint(listint_t *head)
{
	int	sum;

	if (!head || !*head)
		return (0);
	sum = 0;
	while (*head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
