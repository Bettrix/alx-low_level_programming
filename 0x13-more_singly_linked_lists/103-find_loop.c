#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *book, *cover;

	if (head == NULL || head->next == NULL)
		return (NULL);

	book = head->next;
	cover = (head->next)->next;

	while (cover)
	{
		if (book == cover)
		{
			book = head;

			while (book != cover)
			{
				book = book->next;
				book = book->next;
			}

			return (book);
		}

		book = book->next;
		cover = (cover->next)->next;
	}

	return (NULL);
}
