#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * get_nodeint_at_index - cvzcv
 *   * @head: cvzcv
 *    * @index: cvzv
 *     * Return: zdvzcxv
       */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);

	return (node);
}
