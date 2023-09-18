#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - It searches string for any of a set of bytes
 *
 * @s: The first occurrence in the string
 * @accept: It matches one of the bytes, or @NULL if no such byte
 *
 * Return: Pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return (NULL);
}
