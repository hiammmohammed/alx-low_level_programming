#include "main.h"
/**
 * Print_last_digit - Prints the last digit
 * of an number
 *
 * @i: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
int l;

l = n % 10;
if (l < 0)
{
	_putchar(-l + 48);
	return (-l);
}
else
{
	_putchar(l + 48);
	return (l);
}
}
