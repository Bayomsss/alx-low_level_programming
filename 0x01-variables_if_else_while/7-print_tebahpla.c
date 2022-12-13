#include <stdio.h>

/**
 * main - Entry point
 * created by Bayomsss 13 Dec 02:02
 * prints lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{

int alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}

return (0);
}
