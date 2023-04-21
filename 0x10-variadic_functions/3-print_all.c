#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - sdjhcvklz
 * @format: sknfvkxcnmv
 */
void print_all(const char * const format, ...)
{
char *space = "";
char *p;
int i = 0;
va_list ap;

va_start(ap, format);

while (format[i])
{

switch (format[i])
{
case 'c':
printf("%s%c", space, va_arg(ap, int));
break;
case 'i':
printf("%s%d", space, va_arg(ap, int));
break;
case 'f':
printf("%s%f", space, va_arg(ap, double));
break;
case 's':
p = va_arg(ap, char *);
if (p == NULL)
p = "(nil)";
printf("%s%s", space, p);
break;
default:
i++;
continue;
}
i++;
space = ", ";
}
va_end(ap);
printf("\n");


}
