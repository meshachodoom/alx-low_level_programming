#include "function_pointers.h"

/**
* print_name -function that prints name
* @name: a name to be printed
* @f: a function pointer to a callback function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
