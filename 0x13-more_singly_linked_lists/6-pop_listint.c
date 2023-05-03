#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * pop_listint - sldjhvjsdan
 *   * @head: lmkzclmzx
 *    * Return: djvkzcj
     */
int pop_listint(listint_t **head)
{
	listint_t *Node;
	int num;

if (*head == NULL)

	return (0);

	num = (*head)->n;
	node = (*head)->next
		free(*head);
	*head = node;

	return (num);
}
