#include "main.h"

/**
 * _strspn - Func that gets the length of prefix substring
 *
 * @s: Initial segment
 * @accept: It consist only of bytes
 *
 * Return: Num of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int l = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					l++;
			}
		}
		else
			return (l);
	}
	return (l);

}
