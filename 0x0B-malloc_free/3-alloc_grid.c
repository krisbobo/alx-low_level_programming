#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input row
 * @height: input col
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, x, f;

	i = j = x = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	/* using typecasting (int *) to dereference values */
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (f = 0; f < i; f++)
				free(arr[f]);
			free(arr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			arr[j][x] = 0;
	}
	return (arr);
}
