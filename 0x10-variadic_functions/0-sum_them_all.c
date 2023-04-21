#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sdjhcvklz
 * @n: sknfvkxcnmv
 * Return: slncvlcz
 */
int sum_them_all(const unsigned int n, ...)
{

unsigned int i = 0, sum = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ap, unsigned int);
}
va_end(ap);

return (sum);
}
