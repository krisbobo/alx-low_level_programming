#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int cents, coins_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents >= 25)
		{
			cents -= 25;
			coins_number++;
		}
		while ((cents >= 10) && (cents < 25))
		{
			cents -= 10;
			coins_number++;
		}
		while ((cents >= 5) && (cents < 10))
		{
			cents -= 5;
			coins_number++;
		}
		while ((cents >= 2) && (cents < 5))
		{
			cents -= 2;
			coins_number++;
		}
		while ((cents >= 1) && (cents < 2))
		{
			cents == 1;
			coins_number++;
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
