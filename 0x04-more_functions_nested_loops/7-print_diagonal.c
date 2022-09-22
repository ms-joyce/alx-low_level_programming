#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n:number of times diagonal is printed
 */
void print_diagonal(int n)
{
	int c, i;

	c = o;
	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
