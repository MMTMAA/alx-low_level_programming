#include "main.h"
/**
 * factorial - dfsg
 * @n: dsgds
 * Return: dgfsg
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
