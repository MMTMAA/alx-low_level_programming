#include "main.h"
/**
 * print_square - Checks for lowercase charcters
 * @size: The characters to be checked
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
