#include "main.h"
/**
 * _strlen - Function that returns the lenght of a string
 * @s: input string count
 * Return: lenght of string as int
 */
int _strlen(char *s)
{

	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
