#include "main.h"

/**
 * _isupper - It checks all uppercase letter
 * @c: All characters to check
 *
 * Return: 0 if no result or 1 if it mach
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
