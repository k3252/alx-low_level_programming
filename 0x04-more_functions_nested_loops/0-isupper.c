#include "main.h"

/**
 * _isupper - upppercase letters
 * @c: char to check
 *
 * Return: 0or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
