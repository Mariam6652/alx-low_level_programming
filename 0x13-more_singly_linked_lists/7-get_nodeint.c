#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: listint_t
 * @index: unsigned int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
