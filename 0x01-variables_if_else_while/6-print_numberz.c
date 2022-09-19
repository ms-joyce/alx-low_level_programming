#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print single digits from 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		putchar('\n');
	}
	
	return (0);
}
