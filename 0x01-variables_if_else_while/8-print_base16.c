#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints hexadecimal numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
