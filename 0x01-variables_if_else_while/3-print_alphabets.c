#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabet
 *
 * Return: Always (Succes)
 */
int main(void)
{
	char alphabet; 
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
