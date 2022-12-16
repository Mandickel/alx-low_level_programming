#include "main.h"
/**
 * tester - Checking it function is working
 * Return: 0
 *
 **/
int tester(void)
{
	int i;

	i = 98;
	if(i > 0)
	{
		positive_or_negative(i);
		return (0);
	}
	else
	{
		printf("%d is zero",i);
		return (0);
	}
}
