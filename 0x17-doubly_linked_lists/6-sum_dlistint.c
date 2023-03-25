#include "lists.h"
/**
 * sum_dlistint - sums all the data(n)
 * of a dlistint_t list
 * @head: ptr->list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head != 0)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
