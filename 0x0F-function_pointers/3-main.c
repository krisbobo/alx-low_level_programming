#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	char *sign;
	char operator;
	int a, b, answer;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	if ((operator != '*' && operator != '+' && operator != '-'
	     && operator != '/'  && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	sign = argv[2];
	ptr = get_op_func(sign);
	answer = (*ptr)(a, b);
	printf("%d\n", answer);
	return (0);
}
