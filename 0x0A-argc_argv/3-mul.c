#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int x = strtol(argv[1], NULL, 10);
	int y = strtol(argv[2], NULL, 10);
	printf("%d\n", (x * y));
	return (0);
}
