#include "main.h"
/**
 * rev_string - jshdfkj
 * @s: dkfgl
 */
void rev_string(char *s)
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
