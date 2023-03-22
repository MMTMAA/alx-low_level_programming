#include "main.h"


/**
 * _abs - Checks for lowercase charcters
 * @c: The characters to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */

int _abs(int c)
{
int num;
if (c < 0)
{
num = c * -1;
return (num);
}
else
{
return (c);
}
}
