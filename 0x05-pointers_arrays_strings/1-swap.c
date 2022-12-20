#include "main.h"
/**
 * swap_int - swapping values of different variables
 * @i: variable 1
 * @n: variable 2
 * Return: void
 **/
void swap_int(int *i, int *n)
{
	int tmp;

	tmp = *i;
	*i = *n;
	*n = tmp;
}
