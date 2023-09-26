#include "lists.h"
int sum_listint(listint_t *h)
{
	int sum = 0;
	listint_t *temp = h;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
