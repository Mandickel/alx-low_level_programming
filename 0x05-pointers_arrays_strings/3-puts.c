#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string
 * @str: Variable
 * Return: 0
 **/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
