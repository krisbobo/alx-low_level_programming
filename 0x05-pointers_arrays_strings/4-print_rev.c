#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int swapper = 0;
	char str;

	while (*(s + i) != '\0')
		i++;
	i--;

	while (str < i)
	{
		str = s[i];
		s[i] = s[swapper];
		s[swapper] = str;
		swapper++;
		i--;
	}
}
