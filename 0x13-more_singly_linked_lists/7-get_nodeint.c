#include "lists.h"
/**
  *get_nodeint_at_index - function that returns the nth node of a listint_t
  *linked list.
  *@index : node index
  *@head: head of linked list
  *Return: node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
