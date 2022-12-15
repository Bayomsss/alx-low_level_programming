#include "main.h"
#include <ctype.h>

/**
 * _islower(int c) - checks for lower case letter
 * 04:07am 15th Dec by Bayomsss
 * Return: returns 0 or 1 depending on condition
 */

int _islower(int c)
{
return ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'));
}
