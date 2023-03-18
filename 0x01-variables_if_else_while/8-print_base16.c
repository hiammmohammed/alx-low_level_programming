#include <stdio.h>

/**
*main - Print numbers between 0 to 9 and letters between a to f.
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
