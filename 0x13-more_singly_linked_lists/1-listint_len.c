#include "lists.h"

/**
 * listint_len - a function that returns
 * the number of functions that returns a linked listint_t list.
 * @h: list
 * Return: the elements linked.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
