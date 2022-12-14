#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * Return: 0
 *
 */
int print_last_digit(int i)
{
	i = i % 10;
	_putchar(i);
	return (i);
}
