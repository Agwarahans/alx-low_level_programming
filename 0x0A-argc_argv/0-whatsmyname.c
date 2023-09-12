#include <stdio.h>
#include "main.h"

/**
 * main - prints the programs name
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:0
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
