#include "main.h"
/**
 * print_to_98 - Checks for lowercase charcters
 * @n: The characters to be checked
 */
void print_to_98(int n)
{
while (n <= 98)
{
if (n == 98)
{
_putchar(n + '0');
}
else
{
_putchar(n + '0');
_putchar(44);
_putchar(32);
}
n++;
}
}
