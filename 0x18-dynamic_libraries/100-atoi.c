#include "main.h"

/**
 * _atoi - It Converts string to int.
 *
 * @s: Pointer conversion
 *
 * Return: The value of int
*/

int _atoi(char *s)
{
	int sign;
	unsigned int numb;
	char *temp;

	temp = s;
	numb = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			numb = numb * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');

	}
	return (numb * sign);
}
