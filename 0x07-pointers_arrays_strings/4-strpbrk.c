#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string to scan
 * @accept: character to search the string for
 * Return:  a pointer to the byte in s that matches one of the
 * bytes in accept,  or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{

	int i, j;

	if ((s == NULL) && (accept == NULL))
		return (NULL);

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}

	return (NULL);
}
