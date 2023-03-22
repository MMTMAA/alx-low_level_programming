#include "main.h"
/**
 * _isalpha - Checks for lowercase charcters
 * @c: The characters to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */
int _isalpha(int c)
{
if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
{
return (1);
}
return (0);
}
