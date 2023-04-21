#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - sdjhcvklz
 * @n: sknfvkxcnmv
 * @separator: slhdfks
 * Return: slncvlcz
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *p;
unsigned int i = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
p = va_arg(ap, char *);
if (p == NULL)
printf("(nil)");
else
printf("%s", p);
if (separator != NULL && i != (n - 1))
printf("%s", separator);

}
va_end(ap);
printf("\n");


}
