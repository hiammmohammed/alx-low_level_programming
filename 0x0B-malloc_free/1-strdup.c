#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: @
 */
char *_strdup(char *str)
{
char hh;
unsigned int i = 0, r = 0;

if (str == NULL)

	return (NULL);
while (str[i] != '\0')
	i++;
	hh = (char *)malloc(sizeof(char)  *  (i + 1));
if (hh == NULL)

	return (NULL);

for (r; str[r]; r++)
	hh[r] = str[r];
}
