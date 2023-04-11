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
	char *stro;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (stro == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		stro[j] = str[j];
return (stro);
}
