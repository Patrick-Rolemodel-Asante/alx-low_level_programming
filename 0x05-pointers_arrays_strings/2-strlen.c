#include "main.h"
/**
 * _strlen - takes and returns the len of a string
 * @s: the string whose length is needed
 *
 * Return: length of string
 */

int _strlen(char *s)
{	
	int len = 0;
	while (*s!='0')
	{
		len++;
		s++;
	}

	return (len);
}

