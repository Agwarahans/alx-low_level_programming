#include <stdio.h>
#include "main.h"

/**
 * main - print the number of CL arguments 
 * @argc: number of CL arguments
 * @argv: array that has cl arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
