#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0 (successful)
 */
int main(void)
{

	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
