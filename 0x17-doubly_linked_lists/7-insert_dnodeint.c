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

	temp = *h;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count - 1)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *h;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next->prev = newnode;
	newnode->prev = temp;
	temp->next = newnode;
	newnode->n = n;
	return (newnode);
}
