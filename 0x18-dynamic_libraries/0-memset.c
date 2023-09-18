#include "main.h"

/**
 * _memset - function fill first @n bytes of memory ara pointed
 * to by @s with the constant bytr @b
 *
 * @n: The bytes of memory area pointed
 * @b: The memory area pointer
 * @s: The constant byte
 *
 * Return: Pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		s[v] = b;
		v++;
	}

	return s;
}
