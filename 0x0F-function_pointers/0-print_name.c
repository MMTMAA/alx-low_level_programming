#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - dhas
 * @name: jsjd
 * @f: klshdlsdn
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
