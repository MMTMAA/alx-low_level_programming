#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - sdjhcvklz
 * @format: sknfvkxcnmv
 */
void print_all(const char * const format, ...)
{

char *p;
int i = 0;
va_list ap;

va_start(ap, format);

while (format[i] == 1)
{

switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, char));
break;
case 'i':
printf(" %d", va_arg(list, int));
break;
case 'f':
printf(" %f", va_arg(list, double));
break;
case 's':
p = va_arg(list, char *);
if (p == NULL)
p = "(nil)";
printf(" %s", p);
break;
default:
i++;
continue;
}


}
va_end(ap);
printf("\n");


}
