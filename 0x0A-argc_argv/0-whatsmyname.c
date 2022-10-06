#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argunment vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (argc == 1)
			printf("%s\n", argv[count]);
		else
			break;
	}
	return (0);
}
