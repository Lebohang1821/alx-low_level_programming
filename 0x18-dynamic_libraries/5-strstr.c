#include "main.h"

/**
 * _strstr - It locates substring
 *
 * @haystack: Longer string search
 * @needle: First occurrence of substring
 *
 * Return: Pointer beg of substring or Null if it not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int v = 0, x = 0;

	while (haystack[v])
	{
		while (needle[x] && (haystack[v] == needle[0]))
		{
			if (haystack[v + x] == needle[x])
				x++;
			else
				break;
		}
		if (needle[x])
		{
			v++;
			x = 0;
		}
		else
			return (haystack + v);
	}
	return (0);
}
