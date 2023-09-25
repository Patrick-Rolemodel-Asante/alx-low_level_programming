#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to an array
 *
 * Return: nothing
 */

void print_chessboard(char (*a[8]))
{
	int i = 0;

	for (; i < 8; i++)
	{
		int ii = 0;

		for (; ii < 8; ii++)
			_putchar(a[i][ii]);
		_putchar('\n');
	}
}
