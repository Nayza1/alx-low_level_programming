#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *h;

	new = malloc(sizeof(listint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
