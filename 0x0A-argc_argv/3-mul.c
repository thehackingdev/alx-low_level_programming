#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiply two numbers
 * @argc: size of argv array
 * @argv: An array of size argc
 * Return: always successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));


	return (0);
}
