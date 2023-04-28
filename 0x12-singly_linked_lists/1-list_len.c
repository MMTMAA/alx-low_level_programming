#include <stdlib.h>
#include "lists.h"
/**
 *  * list_len - zxcvzxvv
 *   * @h: dfszfcz
 *    * Return: number of elements in h
     */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;

	}
	return (num);
}
