#include <stdio.h>
#include "lists.h"
size_t print_linked_list(struct Node* head)
{
size_t count = 0;
while (head)
{
if (!head->str)
printf("[0] (nil)\n");
else
printf("[%lu] %s\n", head->len, head->str);
head = head->next;
count++;
}
return count;
}
