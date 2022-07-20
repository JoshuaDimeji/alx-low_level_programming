#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: string containing character to match
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, j, flag;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (count);
	}

	return (0);
}
