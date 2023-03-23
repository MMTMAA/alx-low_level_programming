#include "main.h"
/**
 * print_triangle - Checks for lowercase charcters
 * @size: The characters to be checked
 */
void print_triangle(int size);
{
int i;
int j;
int y;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(32);
}
for (y = 0; y <= i; y++)
{
_putchar(35);
}
putchar('\n');
}
}
else
{
_putchar('\n');
}
}
