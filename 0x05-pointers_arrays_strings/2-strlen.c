#include "main.h"
#include <stdio.h>
/**
 * _strlen - A function that returns the length of a string
 * @s: variable
 * Return: void
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++);
	return (i);
}
