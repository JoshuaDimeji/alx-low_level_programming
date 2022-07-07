#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	[-Werror=implicit-function-declaration]
	return (write(1, &c, 1));
}
