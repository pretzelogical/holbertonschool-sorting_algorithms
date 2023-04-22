#include "sort.h"

/**
 * swap_node - swaps two nodes in a doubly linked list
 * @list: head of list to swap
 * @node1: first node to swap
 * @node2: second node to swap
 *
 * Return: void
*/
void swap_node(listint_t **list, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*list = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: doubly linked list to sort
 *
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *next;

	if (list == NULL || *list == NULL)
		return;

	next = (*list)->next;
	while (next != NULL)
	{
		prev = next->prev;
		while (prev != NULL && prev->n > next->n)
		{
			swap_node(list, &prev, next);
			print_list(*list);
		}
		next = next->next;
	}
}
