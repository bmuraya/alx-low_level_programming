#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/


void free_listint(listint_t *head)
{
listint_t *temp = head;
while (temp != NULL)
{
listint_t *next = temp->next;
free(temp);
temp = next;
}
}
