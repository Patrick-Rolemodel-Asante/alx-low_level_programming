#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to the square matrix array
 * @size: length of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0;

	for (; i <= size - 1; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - 1 - i];
	}

	printf("%d, %d\n", sum1, sum2);
}
