#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* randomPasswordGeneration - Function that randomly generates
* passwords of length n.
* Return: Nothing
*/

void randomPasswordGeneration(void)
{
int i = 0;
int randomizer = 0;
char numbers[] = "0123456789";
char letter[] = "abcdefghijklmnopqrstuvwxyz";
char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char symbols[] = "!@#$^&*?";
char password[5];

randomizer = rand() % 4;
srand((unsigned int)(time(NULL)));

for (i = 0; i < 5; i++)
{
if (randomizer == 1)
{
password[i] = symbols[rand() % 8];
randomizer = rand() % 4;
printf("%c", password[i]);
}
else if (randomizer == 2)
{
password[i] = numbers[rand() % 8];
randomizer = rand() % 4;
printf("%c", password[i]);
}
else if (randomizer == 3)
{
password[i] = LETTER[rand() % 26];
randomizer = rand() % 4;
printf("%c", password[i]);
}
else
{
password[i] = letter[rand() % 26];
randomizer = rand() % 4;
printf("%c", password[i]);
}
}
}
