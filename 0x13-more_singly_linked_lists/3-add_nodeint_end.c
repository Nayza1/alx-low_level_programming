#include "lists.h"
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new;
	listint_t *temp = *h;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
