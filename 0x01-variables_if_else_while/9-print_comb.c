#include <stdio.h>

/**
 * main - Entry point
 * created 02:49am, on 13th Dec, by Bayomsss
 * prints combinations of single-digit numbers with space and comma
 * Return: Always 0 (Success)
 */

int main(void)

{

int singleDigit;

for (singleDigit = '0'; singleDigit <= '9'; singleDigit++)
{
putchar(singleDigit);
if (singleDigit < '9')
putchar(',');
if (singleDigit < '9')
putchar(' ');
}

putchar('\n');

return (0);
}
