#include "main.h"
#include <unistd.h>
/**
 * _putchar - writs the character c to stdout
 * @c: The character to print
 * 
 *Return: On success
 *On error, -1 is returned, and erro is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
