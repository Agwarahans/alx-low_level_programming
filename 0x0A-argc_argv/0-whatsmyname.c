#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array that has command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
