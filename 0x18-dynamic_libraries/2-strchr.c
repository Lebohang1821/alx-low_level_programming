#include "main.h"
#include <stddef.h>

/**
 * _strchr - It locates all character in a string
 *
 * @c: The occurrence of character
 * @s: All string to be checked
 *
 * Return: Pointer to first occurrence of the character
 * else returns null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
