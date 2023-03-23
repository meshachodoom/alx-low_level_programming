#include "functions_pointers.h"

/**
* int_index - searches an integer
* @array: array of integers
* @size: size of the array
* @cmp: callback function used to compare elements of the array
* Return: index of the integer is found,
* -1 on failure or if integer is not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
