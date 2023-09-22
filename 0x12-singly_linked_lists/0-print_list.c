#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		head = head->next;
		count++;
	}

	return (count);
}
