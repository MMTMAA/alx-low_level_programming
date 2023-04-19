#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - sdfgg
 * @array: gdxgx
 * @size: sfgdg
 * @cmp: dfgdfxg
 * Return: dfgbd
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array != NULL && size > 0 && cmp != NULL)
{

while (i < size)
{

if (cmp(array[i]) == 1)
return (i);

i++;
}

}

return (-1);
}
