#include <stdio.h>
#include <stdlib.h>
/**
 * print_sign - prints the sign of a number
 * @n: int to test
 * Return: -1,0 or 1
 *
 */
int print_sign(int n)
{
	if (n => 1)
	{
		printf("+");
	}
	else if (n == 0)
	{
		printf("0");
	}
	else
	{
		printf("-");
	}
}
