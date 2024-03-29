#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t elem = 0;

	while (node)
	{
		printf("%i\n", node->n);
		elem++;
		node = node->next;
	}

	return (elem);
}
