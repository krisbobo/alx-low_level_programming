#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: int
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);
	size = (max - min);
	arr = malloc(sizeof(*arr) * (size + 1));
	if (arr == NULL)
		return (NULL);
	while (i <= size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
