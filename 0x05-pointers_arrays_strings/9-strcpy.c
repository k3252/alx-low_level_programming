#include "main.h"

/**
 * strepy - copiar el contendido de uno aotra variable
 * @dest: this is destiny
 * @src: this is copi
 *
 * Return: this return
 */
char *_strepy(char *dest, char *src)
{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
