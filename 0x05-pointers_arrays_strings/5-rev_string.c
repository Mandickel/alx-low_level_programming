#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s:variable
 * Return: 0
 * */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}
	length = i;
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
