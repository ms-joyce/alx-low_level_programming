#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
		putchar('\n');

	return (0);
}
