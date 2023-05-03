#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * sum_listint - zxc
 *   * @head: zxczxc
 *    * Return: zxczxc
      */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
