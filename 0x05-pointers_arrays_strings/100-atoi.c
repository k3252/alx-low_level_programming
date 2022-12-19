#include "main.h"
/**
 * _atio - convert string to an integer
 * @s: pointer to character string
 *
 * Return: void
 */
int _atio(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '_')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}

