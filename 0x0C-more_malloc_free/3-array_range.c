#include <stdlib.h>
#include "main.h"
/**
 * *array_range - sfgsfd
 * @min: sfgsgs
 * @max: sgfgsd
 * Return: sfgsg
 */
int *array_range(int min, int max)
{
int *p;
int i = 0;
int len;

if (min > max)
return (NULL);

len = max - min + 1;

p = malloc(sizeof(int) * len);

if (p == NULL)
return (NULL);

while (min <= max)
{
p[i] = min;
i++;
min++;
}

return (p);
}
