#include "monty.h"
/**
 * _pall - print elements of a stack
 * @h: stack
 * @nl: line from the file
 * Return: Nothing
 */
void _pall(stack_t **h, unsigned int nl)
{
	stack_t *temp;
	(void) nl;	

	if (h == NULL || *h == NULL)
		return;

	temp = *h;

	while (temp->prev != NULL)
		temp = temp->prev;

	while (temp->next != NULL)
		printf("%d\n", temp->n);
	printf("%d\n", temp->n);
}
