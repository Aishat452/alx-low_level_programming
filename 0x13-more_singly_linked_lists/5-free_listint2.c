#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL or \'0'
 * @head: pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *pointerToTheHead;

if (head == NULL)
return;
while (*head)
{
pointerToTheHead = *head;
*head = (*head)->next;
free(pointerToTheHead);
}

*head = NULL;
}
