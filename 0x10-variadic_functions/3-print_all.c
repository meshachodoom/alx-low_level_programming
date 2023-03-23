#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
int i, match = 1;
char *str;
va_list args;

va_start(args, format);

i = 0;

while (format && format[i])
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
match = 0;
}
if (format[i + 1] != '\0' && match == 1)
printf(", ");
match = 1;
i++;
}
printf("\n");
va_end(args);
}
