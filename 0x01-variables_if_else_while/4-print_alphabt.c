#include <stdio.h>

/**
 * main - Print lowercase alphabet without q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
