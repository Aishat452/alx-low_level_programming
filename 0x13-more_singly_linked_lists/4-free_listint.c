#include "lists.h"

/**
 * free_listint - this frees a linked list
 * @head: listint_t the list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
