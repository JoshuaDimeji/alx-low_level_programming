#include "main.h"
/**
 * _isupper - function to check uppercase character
 * @c: Character to return
 * Return: 1 if c is uppercase and 0 if c otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	else
	return (0);
}
