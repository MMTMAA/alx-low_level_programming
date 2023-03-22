#include "main.h"


/**
 * print_last_digit - Checks for lowercase charcters
 * @c: The characters to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */

int print_last_digit(int c)
{
int n = c % 10;
if (n < 0)
n = n * -1;
_putchar(n);
return (n);
}
