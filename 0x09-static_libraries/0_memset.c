#include "main.h"
/**
 * _memset - fill a back of memmory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsihned int n)
{
int i = 0;
for (; n > 0; i++)
{
	s[i] = b;
	n--
}
return (s);
}
