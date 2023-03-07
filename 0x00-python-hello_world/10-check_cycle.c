#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"
/**
 * check_cycle - check if a linked list contains a cycle
 * @list: link list to check
 * Return: 1 if the list has a cycle, 0 if it doesn't
*/
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	fast = fast->next;
	while (slow != NULL && fast->next != NULL && slow != NULL)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
