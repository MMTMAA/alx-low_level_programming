#include "main.h"
/**
 * print_rev - jskdj
 * @s: jsdhfjs
 */
void print_rev(char *s)
{
int len = 0;
int i;
while (*s != '\0')
{
len++;
s++;
}
for (i -= len; i >= 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

