#include "main.h"

/**
 * _islower - Return 1 if lowercase and 0 if not
 * @c: letter input
 * Return: Always success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
