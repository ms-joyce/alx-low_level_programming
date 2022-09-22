#include "main.h"

/**
 * print_line - Draw a straight line
 * @c: number of times character should be printed
 * Return: A straight line
 */
void print_line(int n)
{
	int c;

	c = 0
	while (c < n)
	{
		_putchar('_');
		c++
	}
	_putchar('\n');
}
