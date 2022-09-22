#include "main.h"

/**
 * print_numbers - Print numbers from 0 through 9 folloed by a new line
 * 
 * Return: 0 through 9 and new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
