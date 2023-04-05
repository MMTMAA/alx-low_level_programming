#include "main.h"
/**
 * _pow_recursion - dfsg
 * @x: dsgds
 * @y: jlshjs
 * Return: dgfsg
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}
