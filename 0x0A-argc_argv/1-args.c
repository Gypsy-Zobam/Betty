#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it
 * @argc: number of command line argument
 * @argv: array name
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - n);
	else
	{
		for(i = 0; *argc; i++, argv++);

		printf("%d\n", i - 1);
	}

	return (0);
}
