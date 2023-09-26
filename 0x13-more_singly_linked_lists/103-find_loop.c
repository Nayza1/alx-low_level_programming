#include "lists.h"
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *s= h;
	listint_t *f = h;

	if (!h)
		return (NULL);

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = h;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}
