#include "main.h"

/**
 * print_most_numbers - Print numbers fro 0 through 9 without 2 and 4
 * Return: Always success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
