// Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
//
//You are only allowed to use the printf function
//You are not allowed to use interrupts

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints Hello, Holberton, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "Hello, Holberton";

	printf("%s\n", str);
	return (0);
}
