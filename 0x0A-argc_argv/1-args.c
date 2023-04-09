#include <stdio.h>
#include "main h"
/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv[]*/
printf("%d\n", argc - 1);

return (0);
}
