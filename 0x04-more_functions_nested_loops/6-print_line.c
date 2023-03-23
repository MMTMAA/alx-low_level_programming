#include "main.h"
/**
 * print_line - Checks for lowercase charcters
 * @n: The characters to be checked
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
