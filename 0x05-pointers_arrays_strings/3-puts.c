#include "main.h"

/**
 * _puts - prints string followed by a new line
 * created by Bayomsss, 22 Dec at 14:23
 * @str: string to be printed
 * Return: 0
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
