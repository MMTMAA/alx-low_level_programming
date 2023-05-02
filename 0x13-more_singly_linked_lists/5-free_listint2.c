#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * free_listint2 - sldjhvjsdan
 *   * @head: lmkzclmzx
 */
void free_listint2(listint_t **head)
{
	listint_t *NextNode;

	while (*head)
	{
		NextNode = (*head)->next;
		free(*head);
		*head = NextNode;
	}
	*head = NULL;
}
