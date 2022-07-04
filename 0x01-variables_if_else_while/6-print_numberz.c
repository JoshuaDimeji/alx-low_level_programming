#include <stdlib>
#include <stdio.h>
/**
 * main - print single digits in base 10 follwed by newline
 * Return: 0 (successful)
 */
int main(void)
{

	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
