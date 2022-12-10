#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * this code runs a predefined output (negative, zero, or positive)
 * based on a random generated input
 * created by Bayomss 10 Dec, 2022 at 05:38am
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
printf("%d is negative\n", n);
return (0);
}
