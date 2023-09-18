#include "main.h"

/**
 * _puts - takes and print a string terminated with a new line to standard output
 * @str: string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str !='\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

