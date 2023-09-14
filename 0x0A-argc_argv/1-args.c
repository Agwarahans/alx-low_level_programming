
#include <stdio.h>
#include "main.h"

/**
 * main - print the num of command line arguments passed to the program
 * @argc: number of command line arguments
 * @argv: array of comand line  arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
