#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sdjhcvklz
 * @n: sknfvkxcnmv
 * @separator: slhdfks
 * Return: slncvlcz
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i = 0, sum = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d ", va_arg(ap, unsigned int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);

}
va_end(ap);
printf("\n");

}
