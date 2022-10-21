#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;
	const listint_t *temp_h;

	temp_h = h;
	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		temp_h = temp_h->next;
		n_nodes++;
	}
	return (n_nodes);
}
