#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *  * add_nodeint - sldjhvjsdan
 *   * @n: lvlsdmvc
 *    * @head: lmkzclmzx
 *     * Return: asfsdf
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
