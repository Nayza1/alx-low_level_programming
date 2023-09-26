#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *h);
size_t print_listint_safe(const listint_t *h);
size_t looped_listint_len(const listint_t *h)
{
	const listint_t *car, *mol;
	size_t nodes = 1;

	if (h == NULL || h->next == NULL)
		return (0);

	car = h->next;
	mol = (h->next)->next;

	while (mol)
	{
		if (car == mol)
		{
			car = h;
			while (car != mol)
			{
				nodes++;
				car = car->next;
				mol = mol->next;
			}

			car = mol->next;
			while (car != mol)
			{
				nodes++;
				car = car->next;
			}

			return (nodes);
		}

		car = car->next;
		car = (car->next)->next;
	}

	return (0);
}
size_t print_listint_safe(const listint_t *h)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(h);

	if (nodes == 0)
	{
		for (; h != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
		}

		printf("-> [%p] %d\n", (void *)h, h->n);
	}

	return (nodes);
}
