#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes character to stdout
 * @c: charcter to print
 * Return: success 1
 * on error, -1 is returned
 */
int _ putchar(char c)
{
	return(write(1, &c, 1));
}
