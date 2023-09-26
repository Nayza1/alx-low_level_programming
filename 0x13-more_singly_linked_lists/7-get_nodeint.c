#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = h;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
