#include "variadic_functions.h"
/**
* sum_them_all - a function that return the sum of all of its parameters
* @n: number of parameters
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list ptr;
if (n == 0)
{
va_end(ptr);
return (0);
}
va_start(ptr, n);

for (i = 0; i < n; i++)
sum += va_arg(ptr, int);

va_end(ptr);

return (sum);
}
