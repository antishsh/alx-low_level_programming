#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
