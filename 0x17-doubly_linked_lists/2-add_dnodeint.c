#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning
 * of a dlistint_t list
 * @head: pointer to head
 * @n: int
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = 0;
	temp->next = 0;

	if (*head == 0)
		*head = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
