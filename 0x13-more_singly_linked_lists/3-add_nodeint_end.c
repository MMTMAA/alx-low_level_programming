#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * add_nodeint_end - sldjhvjsdan
 *   * @n: lvlsdmvc
 *    * @head: lmkzclmzx
 *     * Return: asfsdf
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *LastNode = *head;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}
	else
	{
		while (LastNode->next)
			LastNode = LastNode->next;

		LastNode->next = NewNode;
	}

	return (NewNode);
}
