#include "main.h"
/**
 * puts_half - jfghksdj
 * @str: lsjfhls
 */
void puts_half(char *str)
{
int l = 0;
int i;
while (str[l] != '\0')
{
l++;
}

if (l % 2 == 1)
{
i = (l - 1) / 2;
i += 1;
}
else
{
i = l / 2;
}

while (i < l)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
