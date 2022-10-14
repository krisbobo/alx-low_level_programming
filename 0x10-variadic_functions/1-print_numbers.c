#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int aux = 0;


	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		aux = va_arg(arguments, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", aux, separator);
		else
			printf("%d", aux);
	}
	va_end(arguments);
	printf("\n");
}
