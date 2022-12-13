#include "main.h"
#include <stdlib.h>
/**
 * _islower - starting point
 *
 * Return: 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
