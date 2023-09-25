#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the adddress of the memory to be filled with the constant byte.
 * @b: the constant to be used
 * @n: the number of bytes to be set with the constant character
 *
 * Return: pointer to the memory address.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
