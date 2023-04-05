#include "lists.h"
#include <string.h>

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
listint_t *pops;
int current;
if (*head == NULL)
return (0);
pops = *head;
current = pops->n;
free(pops);
*head = (*head)->next;
return (current);
}
