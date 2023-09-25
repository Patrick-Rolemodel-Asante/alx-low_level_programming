#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *res;

	for (; *(haystack + i) != '\0'; i++)
	{
		int ii = 0;

		for (; *(haystack + i + ii) == *(needle + ii) && *(needle + ii) != '\0'; )
			ii++;

		if (needle[ii] == '\0')
		{
			res = haystack + i;
			return (res);
		}
	}
	return (NULL);
}
