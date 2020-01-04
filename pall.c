#include "monty.h"
/**
 * _pall - function to show all the stack
 * @h: stack
 * @nl: line from the file
 */
void _pall(stack_t **h, unsigned int nl)
{
	stack_t *temp;

	(void)nl;
	temp = *h;
	while (temp->prev != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
	printf("%d\n", temp->n);
}
