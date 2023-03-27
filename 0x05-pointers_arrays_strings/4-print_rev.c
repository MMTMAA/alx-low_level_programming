#include "main.h"
/**
 * print_rev - jskdj
 * @s: jsdhfjs
 */
void print_rev(char *s)
{
int len;
int i;
while (*s != '\0')
{
len++;
s++;
}
for (i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
}

