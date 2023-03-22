#include <stdio.h>
#include "functions_pointers.h"

/**
* int_index - Function that searches for an integer
* @array: Array function to be serached
* @size: Size of array
* @cmp: Function used to compare values
* Return: Returns index of first integer to match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int n;

n = 0;

while (size && n < size)
{
if (cmp(array[n] != 0)
return (n);
n++;
}
return (-1);
}
