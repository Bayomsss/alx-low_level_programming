#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this program generates a random number and prints the number with the last
 * digit while also taking relation to given range
 * 10 Dec, 2022 at 06:41 by Bayomsss
 * Return: Always 0 (Success)
 */
int main(void)
{
/* i have assigned a new integer lastDigit to display the last number of n*/

int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

/* here if lastDigit is > than 5 */

if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);

else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}

else
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

return (0);
}
