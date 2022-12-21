#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 * */
char *_memset(char *s, char b, unsigned int n)
{
	int s = 0, i = 0;
	
	while (dest[s] != 0)
	{
		s++;
	}
	while (src[i] != 0)
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = 0;
	return (dest);
}
