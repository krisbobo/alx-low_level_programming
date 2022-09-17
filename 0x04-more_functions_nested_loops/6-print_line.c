#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_line(int n)
{
	int strLine;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (strLine = 1; strLine <= n; ++strLine)
			_putchar('_');
		_putchar('\n');
	}
}
