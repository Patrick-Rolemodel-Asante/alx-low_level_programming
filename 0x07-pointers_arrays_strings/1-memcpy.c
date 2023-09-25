#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area from source to destination
 * @dest: where memory address is copied to
 * @src: where memory address is copied from
 * @n: number of bytes to be copied from the src to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
