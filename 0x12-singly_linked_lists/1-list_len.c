#include <stdlib.h>
#include "list.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Returns: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t = 0;

	while (h)
	{
		n++;
		h = h->next;
		}
	return (n);
}
