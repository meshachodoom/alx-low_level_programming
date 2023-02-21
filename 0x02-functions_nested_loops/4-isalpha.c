#include "main.h"

/**
*_isalpha - function checks if character is alphanumeric
*@c: character to be checked
*Return: Returns 0 or 1 based on input
*/

int _isalpha(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
