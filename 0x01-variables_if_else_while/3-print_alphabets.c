#include <stdio.h>

/**
 * main - Entry point
 * this program prints the alphabet in lowercase using the putchar function
 * Bayomsss 10 Dec at 07:31 am
 * Return: Always 0 (Success)
 */


int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
putchar (n);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
