#include "lists.h"

/**

 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*h)
	{
		next = (*h)->next;
		(*head)->next = prev;
		prev = *h;
		*h = next;
	}

	*head = prev;

	return (*h);
}
