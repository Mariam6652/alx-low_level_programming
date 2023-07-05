#include"lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: listint_t
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
