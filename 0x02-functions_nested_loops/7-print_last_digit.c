#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @d: last digit
 * Return: value of last digit
 */
int print_last_digit(int d)
{
	int d;

	d = (d % 10);

	if (d < 0)
	{
		d = (-1 * d);
	}

	_putchar(d + '0');
	return (d);
}
