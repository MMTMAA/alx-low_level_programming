#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - dhas
 * @size: sdfg
 * @array: jsjd
 * @action: klshdlsdn
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i = 0;
if (array != NULL && action != NULL)
{
while (i < size)
{
action(array[i]);
i++;
}
}

}
