#include "main.h"
/**
 * _isdigit - Checks for lowercase charcters
 * @c: The characters to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
