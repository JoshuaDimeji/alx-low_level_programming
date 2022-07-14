#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the input string
 * Return: nothing
 */
void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	char temp[1000];

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		temp[j] = s[i - 1];
		j++;
	}
	while (i < j)
	{
		s[i] = temp[i];
		i++;
	}
}
