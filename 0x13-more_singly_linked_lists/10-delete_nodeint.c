/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    while (i < index && current != NULL)
    {
        prev = current;
        current = current->next;
        i++;
    }

    if (i == index && current != NULL)
    {
        prev->next = current->next;
        free(current);
        return (1);
    }

    return (-1);
}

