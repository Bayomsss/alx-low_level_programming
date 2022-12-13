#include <stdio.h>

/**
 * main - Entry point
 * this prints all alphabets except q and e
 * Bayomsss 13 Dec at 01:18 am
 * Return: Always 0 (Success)
 */

int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n != 'q' && n != 'e')
putchar (n);
}
putchar ('\n');
return (0);
}
