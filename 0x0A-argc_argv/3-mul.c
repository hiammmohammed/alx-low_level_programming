#include <stdio.h>
#include <stdlib.h>

/**
 * main - converts a string to an integer
 * @argc: count of arguments
 * @argv: array of string arguments
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
	puts("Error");
}
return (0);
}
