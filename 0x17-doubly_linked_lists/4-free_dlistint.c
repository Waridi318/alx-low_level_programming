#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: ptr->list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
