#include <stdio.h>
/**
 * main - Opening point
 * Description - function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 **/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char c = 'a';

	for (c <= 'z'; ++c)
		_putchar(c);
	return 0;
}

