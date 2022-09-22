#include "main.h"

/**
 * print_alphabet - Print lowercase alphabet using _putchar
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
