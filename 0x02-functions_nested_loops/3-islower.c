#include "main.h"
#include <ctype.h>

/**
 * _islower(int c) - Entry point
 * 04:07am 15th Dec by Bayomsss
 * Return: Always 0.
 */

int _islower(int c)
{
return (( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
