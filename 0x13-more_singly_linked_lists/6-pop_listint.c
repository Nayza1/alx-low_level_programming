int pop_listint(listint_t **h)
{
	listint_t *temp;
	int num;

	if (!head || !*h)
		return (0);

	num = (*h)->n;
	temp = (*h)->next;
	free(*h);
	*h = temp;

	return (num);
}
