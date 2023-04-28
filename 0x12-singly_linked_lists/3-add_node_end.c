#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * * add_node_end - cvbcvb
 * * @head: cvbcvbcv
 * * @str: vbbc
 * * Return: fsvfb
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *temp = *head;
	unsigned int length = 0;
while (str[length] != NULL)
length++;

	new = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	newn->len = length;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
