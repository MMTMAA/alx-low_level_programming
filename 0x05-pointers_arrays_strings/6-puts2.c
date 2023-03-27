#include "main.h"
/**
 * puts2 - ;ksfj
 * @str: sfgsf
 */
void puts2(char *str)
{
int l = 0;
int i;
while (str[l] != '\0')
{
l++;
}
for (i = 0; i < l; l += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
