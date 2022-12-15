#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * created by Bayomsss, 15th Dec, 2022 at 03:43am
 * Return: Always 0.
 */

void print_alphabet(void)
{
char i;
int j;

for(j = 1; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
return 0;
}
