#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Determines whether a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *sl, *ft;

	if (list == NULL || list->next == NULL)
		return (0);

	sl = list->next;
	ft = list->next->next;

	while (sl && ft && ft->next)
	{
		if (sl == ft)
			return (1);

		sl = sl->next;
		ft = ft->next->next;
	}

	return (0);
}
