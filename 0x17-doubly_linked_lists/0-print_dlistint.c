#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: ptr->list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
