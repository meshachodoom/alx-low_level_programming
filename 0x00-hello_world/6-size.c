#include <stdio.h>

/**
*main-This is the main function description
*
*Return: 0 for succesful exit
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a floate: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
