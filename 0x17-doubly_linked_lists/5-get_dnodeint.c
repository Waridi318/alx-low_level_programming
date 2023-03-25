#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: ptr-> first node
 * @index: index of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
       	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}

	if (index > count - 1)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
