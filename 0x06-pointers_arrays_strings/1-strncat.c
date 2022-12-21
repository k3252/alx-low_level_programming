#include "main.h"
/**
 * strncat - concatenate two string but add inpited number of by byte
 * @dest: string to be appended at end of dest
 * @src: string to be compleated at end of dest
 * @n:integer parameter to compare index to 
 * Return: return new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
