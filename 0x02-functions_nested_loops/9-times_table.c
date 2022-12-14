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
		 printf("%d * 9 = %d\n", i, i * 9);
	 }    
}
