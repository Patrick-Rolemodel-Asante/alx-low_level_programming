#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched from
 * @accept: string to be searched
 *
 * Return: a pointer to a byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, ii = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (; *(accept +  ii) != '\0'; ii++)
		{
			if (*(s + i) == *(accept + ii))
				return (s + i);
		}
		ii = 0;
	}

	return (NULL);
}
