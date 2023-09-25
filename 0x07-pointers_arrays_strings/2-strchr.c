#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string in which character is to be located
 * @c: the character to be located.
 *
 * Return: pointer to the character located or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
