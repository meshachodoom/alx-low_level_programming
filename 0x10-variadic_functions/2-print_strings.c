#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list strings;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if (str == NULL)
str = "(nil)";

printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(strings);
}
