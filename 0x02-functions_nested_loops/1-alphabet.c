#include <stdio.h>
/**
 * main - Opening point
 * Description - function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 **/

void print_alphabet() {
	  char letter;

	    for (letter = 'a'; letter <= 'z'; letter++) {
		        _putchar(letter);
			  }
		_putchar("\n");
	      	return 0;
}
