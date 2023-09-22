#include <stdlib.h>
#include <string.h>
#include "lists.h"
{
	list_t *new;
	unsigned int n = 0;

	while (str[n])
		n++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->n = n;
	new->next = (*h);
	(*h) = new;

	return (*h);
}
