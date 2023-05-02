#include <stdio.h>
#include "lists.h"
/**
 * print_listint - sldjhvjsdan
 * @h: lvlsdmvc
 * Return: asfsdf
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
