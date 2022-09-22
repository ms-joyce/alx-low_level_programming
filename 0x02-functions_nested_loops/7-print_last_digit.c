#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @d: last digit
 * Return: value of last digit
 */
int print_last_digit(int d)
{
	int n;

	n = (d % 10);

	if (n < 0)
	{
		n = (-1 * d);
	}

	_putchar(n + '0');
	return (n);
}
