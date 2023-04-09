#include <stdio.h>
#include "main.h" 
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: array of string arguments
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
