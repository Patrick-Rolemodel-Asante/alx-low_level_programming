#include "main.h"

/**
 * swap_int - takes and swaps the values of two integers.
 * @a: first interger
 * @b: second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int sec;
	sec = *a;
	*a = *b;
	*b = sec;
}

