#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
/* Dont use the ! operator it says if no h and that's a non ending loop since it wouldn't find that */

			printf("[%d] %s\n", 0, "(nil)");
	/* This uses the format specifiers to give out the desired result in their desired types if your enclose all in quote as u did it will turn everything within it into a string */
	else
			printf("[%d] %s\n", h->len, h->str);

/* Your printing an interger so %d is the desirable specifier*/
		h = h->next;
		s++;
	}

	return (s);
}
