#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int new;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (new=len; new > 0; new++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

