#include "main.h"

/**
 * more _numbers - Prints from 0 to 14, 10 times
 * Description: Can only use _putchar 3 times
 *
 * Return: 0-14, 10 times followed by new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
