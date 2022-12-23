#include <unisted.h>

/**
 * _putchar - write the character c to stdout
 * @c: char to be printed
 * Return: 1 on sucseess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
