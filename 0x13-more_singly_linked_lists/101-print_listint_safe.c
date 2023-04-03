#include "lists.h"

/**
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t pichu = 0;
	const listint_t *addtn_node = head;

	if (!head)
		exit(98);

	while (addtn_node)
	{
		printf("[%p] %i\n", (void *)addtn_node, addtn_node->n);
		addtn_node = addtn_node->next;
		pichu++;
	}
	return (pichu);
}
