#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always (Succes)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
