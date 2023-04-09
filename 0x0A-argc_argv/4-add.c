#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid - validity
 * @s: pointer to string
 *
 * Description: determine if string is a number
 *
 * Return: returns 0 or 1
 */
int is_valid(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] < 48 || s[i] > 57)
			return (0);
	}

	return (1);
}

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
	int i, num;
	unsigned int sum = 0;

	if (argc == 1)
	{
		puts("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_valid(argv[i]) || num < 0)
			{
				puts("Error");
				return (1);
			}

			num = atoi(argv[i]);

			sum += num;
		}

		printf("%u\n", sum);
	}

	return (0);
}
