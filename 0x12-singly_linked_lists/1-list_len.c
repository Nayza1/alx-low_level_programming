#include <stdlib.h>
#include "lists.h"
size_t list_len(const list_t *head)
{
	size_t f = 0;

	while (head)
	{
		f++;
		head = head->next;
	}
	return (f);
}
