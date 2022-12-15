#include "main.h"

/**
 * _islower - Entry point
 * 04:07am 15th Dec by Bayomsss
 * @c: argument
 * int: data type
 * Return: 0 and 1 success
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
