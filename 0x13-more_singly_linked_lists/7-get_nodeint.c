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
	listint_int *current;

	if (head == NULL)
		return (0);
	current = head;

	while (index != 0)
	{
		current = current->Next;
		index--;
		if (current == NULL)
			return (0); /*out of range*/
	return (current);

}
