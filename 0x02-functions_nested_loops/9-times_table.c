#include <stdio.h>
#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 * i = row, j = column, d = digits of current result
 * Return: 0
 *
 **/
void times_table(void)
{
	int i;
	int j;

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
		printf("%d,  ", i * j);
		}
		printf("\n");
	}
	return (0);
}
