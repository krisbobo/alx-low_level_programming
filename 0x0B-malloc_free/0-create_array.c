#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: input size
 * @c: input char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i += 1;
	}
	return (ar);
}
