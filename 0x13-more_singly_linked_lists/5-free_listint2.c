#include "lists.h"
/**
 *
 */
void free_listint2(listint_t **h)
{
	listint_t *temp;

	if (h == NULL)
		return;

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h= temp;
	}

	*h= NULL;
}
