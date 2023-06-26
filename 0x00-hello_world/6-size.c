#include <stdio.h>
/**
  *main - Entry  point
  *Return: always 0 (success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
printf("\n"); /* Blank line added */
	return (0);
}
