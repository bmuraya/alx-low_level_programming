#include "lists.h"

/**
 File: 5-free_listint2.c
 Auth Babu Muraya

*/

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
