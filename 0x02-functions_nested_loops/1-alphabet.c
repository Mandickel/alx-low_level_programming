#include "holberton.h"
/**
 * print_alphabet - Opening point
 * Description - function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing
 **/
void print_alphabet(void) {
	  char letter;

	    for (letter = 'a'; letter <= 'z'; letter++) 
	    {
		        _putchar(letter);
	    }
		_putchar("\n");
	      	
}
