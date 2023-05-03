#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * delete_nodeint_at_index - zxczxc
 *   * @head: xczxc
 *    * @index: zxczx
 *     * Return: czxczc
       */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mainnode = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(mainnode);
		return (1);
	}

	while (i < index - 1)
	{
		if (mainnode == NULL)
			return (-1);

		mainnode = mainnode->next;
		i++;
	}


	node = mainnode->next;
	mainnode->next = node->next;
	free(node);

	return (1);
}
