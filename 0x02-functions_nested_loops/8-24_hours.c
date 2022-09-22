#include "main.h"

/**
 * jack_bauer - Print every minute of the day from 00:00 to 23:59
 * h = hour, m = minute
 * Return: 24 hour clock
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
}
