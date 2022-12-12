#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Starting point
 *
 * Return: ::0
 **/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDigit);
	}
	return (0);
}
