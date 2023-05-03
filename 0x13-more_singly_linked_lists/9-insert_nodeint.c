#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * insert_nodeint_at_index - vxcvx
 *   * @head: vxcv
 *    * @idx: cvxcv
 *     * @n: xcvxcv
 *      * Return: dvc
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *allnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == null || allnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;



	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = allnode->next;
			allnode->next = newnode;
			return (newnode);
		}

	}

	return (NULL);
}
