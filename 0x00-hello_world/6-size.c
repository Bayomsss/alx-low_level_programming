#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char charSize;
int intSize;
li longSize;
lli longLongSize;
float floatSize;

printf("Size of char: %lu byte(s)\n", sizeof(charSize));
printf("Size of int: %lu byte(s)\n", sizeof(intSize));
printf("Size of li: %lu byte(s)\n", sizeof(longSize));
printf("Size of lli: %lu byte(s)\n", sizeof(longLongSize));
printf("Size of float: %lu byte(s)\n", sizeof(floatSize));

return(0);
}
