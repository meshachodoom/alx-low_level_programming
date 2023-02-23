#include "main.h"

/**
* print_triangle - function that prints a square, followed by a new line
* @size: size of triangle
* Return: nothing.
*/

void print_triangle(int size)
{
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
