#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * r = row, c = column, d = current result
 * Returns: times tables
 * add extra space past single digit
 */

void times_table(void)
{

int r, c, d;

for (r = 0; r < 10; r++)
{

for (c = 0; c < 10; c++)
{

d = c * r;

if (c == 0)
{
_putchar(d + '0');
}
if (d < 10 && c != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(d + '0');
}
else if (d >= 10)
{
_putchar(',');
_putchar(',');
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
_putchar('\n');
}
}
}

