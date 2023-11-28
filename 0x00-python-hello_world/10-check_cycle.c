#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/**
 * check_cycle - cheks if list is cyclical
 *
 * @list: pointer to list to check
 *
 * return: 1 if cyclical, 0 otherwise
*/

int check_cycle(listint_t *list)
{
	listint_t *slw = list, *fst = list;

	while (fst && fst ->next)
	{
		slw = slw ->next;
		fst = fst ->next->next;
		if ( slw == fst)
			return (1);
	}
	return (0);
}
