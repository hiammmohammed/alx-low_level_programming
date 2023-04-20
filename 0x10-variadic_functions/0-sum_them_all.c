#include "varidic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramter.
 *
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list app;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
