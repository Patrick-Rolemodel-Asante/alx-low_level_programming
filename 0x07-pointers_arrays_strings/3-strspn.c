#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string whose substring is to be used
 * @accept: substring whose length is to be determined
 *
 * Return: the number of bytes of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, ii = 0, counter = 0;

	for (; *(s + i) != '\0'; i++)
	{
		int found = 0;

		for (; *(accept + ii) != '\0'; ii++)
		{
			if (*(s + i) == *(accept + ii))
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;
		counter++;
		ii = 0;
	}

	return (counter);
}
