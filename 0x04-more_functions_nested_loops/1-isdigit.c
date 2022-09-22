#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit 0 through 9
 * @c: input
 * Return: 1 if c and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
