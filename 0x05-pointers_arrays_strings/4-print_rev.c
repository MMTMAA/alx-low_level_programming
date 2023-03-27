#include "main.h"
/**
 * print_rev - jskdj
 * @s: jsdhfjs
 */
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
for (l -= 1; l >= 0; l--)
{
_putchar(s[l]);
}
_putchar('\n');
}
