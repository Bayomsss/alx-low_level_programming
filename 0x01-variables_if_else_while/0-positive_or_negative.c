#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Bayomsss Doc created 10 Dec, 2022 by 05:06
 * this file takes an input and returns negative, zero or positive based on the specified input
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n > 0){
	printf("Positive");
	}
	else if (n == 0){
	printf("Zero");
	}
	else{
	  printf("Negative");
	}
	return (0);
}
