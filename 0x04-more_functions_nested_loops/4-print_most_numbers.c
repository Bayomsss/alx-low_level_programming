#include "main.h"

/**
 * print_numbers - Entry point
 * created by Bayomsss, 17th Dec, 2022 at 05:42am
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
continue;
_putchar(i);
}
_putchar('\n');
}
