#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list.
 * @head: ptr->head
 * @n: int
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tail;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = 0;
	temp->next = 0;

	if (*head == 0)
	{
		*head = temp;
		tail = temp;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
	return (temp);
}
