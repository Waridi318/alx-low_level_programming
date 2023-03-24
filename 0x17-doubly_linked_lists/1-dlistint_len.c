#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: ptr->list
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
