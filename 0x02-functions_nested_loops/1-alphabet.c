#include "main.h"

/**
 * This program prints all the lowercase alphabet to the standard output
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

