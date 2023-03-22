#include "main.h"
/**
 * _islower - check the code.
 * c - dcskck
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (0);
}
}
