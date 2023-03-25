#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given position.
 * @h: ptr->h->list
 * @idx: index where node should be added
 * @n: int n
 * Return: &new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *h;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	if (*h == 0)
	{
		*h = newnode;
		newnode->prev = 0;
		newnode->next = 0;
		newnode->n = n;
		return (newnode);
	}
	if (idx > count)
		return (NULL);

	if (idx == 0 || count == 1)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (count == 2)
	{
		temp->prev->next = newnode;
		newnode->prev = temp->prev;
		temp->prev = newnode;
		newnode->next = temp;
		newnode->n = n;
	}
	if (count > 2)
	{
		newnode->next = temp->next;
		temp->next->prev = newnode;
		newnode->prev = temp;
		temp->next = newnode;
		newnode->n = n;
	}
	return (newnode);
}
