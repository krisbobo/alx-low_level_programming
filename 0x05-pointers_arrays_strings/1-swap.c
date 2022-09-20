#include "main.h"

/**
 *
 * swap_int - swaps two integers
 *
 * @a: pointer to an int
 * @b: pointer to another int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
