#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_nod = *head;

	if (!first_nod)
		return (0);

	data = (*head)->n;
	*head = first_nod->next;
	free(first_nod);
	return (data);
}

