#include <stdio.h>
#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 *
 * Return: 0
 *
 **/
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
	for (int j = 0; j <= 9; j++)
	{
	printf("%d,  ", i * j);
	}
	printf("\n");
	}
	return 0;
}
