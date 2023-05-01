#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * the function sets the head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *actual_nod;
	listint_t *next_nod;

	if (!head)
		return;

	actual_nod = *head;
	next_nod = (*head)->next;
	while (next_nod)
	{
		free(actual_nod);
		actual_nod = next_nod;
		next_nod = next_nod->next;
	}
	free(actual_nod);
	*head = NULL;
}
