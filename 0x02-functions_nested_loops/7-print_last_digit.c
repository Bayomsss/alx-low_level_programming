#include "main.h"
/**
 * print_last_digit - Entry point
 * created 15 Dec 2022 by 10:11am
 * @l: last digit
 * @n: number in question
 * Return: value of last digit
 */

int print_last_digit(int n)
{
int l;
l = n % 10;
_putchar (l);
return (l);
}
