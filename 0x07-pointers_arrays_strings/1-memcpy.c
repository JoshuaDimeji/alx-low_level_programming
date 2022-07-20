#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the destination
 * @src: the source
 * @n: number of bytes to copy
 * Return: aa pointet to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
