#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Starting point
 *
 * Return: 0
 * 
 * */
int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;

	n = n % 10;
	if(n>5)
	{
		printf("Last digit of %i is greater than 5\n",n);
	}
	else if(n==0)
	{
		printf("Last digit of %i is 0 and is 0\n",n);
	}
	else if(n<6 && !=0)
	{
		printf("Last digit of %i is less than 6 and not 0\n",n);
	}
	return (0);
}
