#include "main.h"
/**
 * print_diagonal - Checks for lowercase charcters
 * @n: The characters to be checked
 */
void print_diagonal(int n)
{
int i = 0;
int j = 0;
if (n > 0)
{
while (i < n)
{
while (j < n)
{
if (j == 0)
{
continue;
}
else
{
_putchar(32);
}
j++;
}
_putchar(92);
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
