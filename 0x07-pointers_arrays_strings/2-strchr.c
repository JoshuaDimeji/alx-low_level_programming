#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character c
 * in the string s,
 */
char *_strchr(char *s, char c)
{

	char *flag = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				flag = s;
				break;
			}
		} while (*s++);
	}

	return (flag);
}
