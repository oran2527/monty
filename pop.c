#include "monty.h"
/**
 * _pop - function to delet the top element of the stack
 * @h: stack
 * @nl: line from the file
 */
void _pop(stack_t **h, unsigned int nl)
{
	stack_t *temp;
	(void)nl;

	if ((*h)->prev != NULL)
	{
		temp = (*h)->prev;
		temp->next = NULL;
		(*h)->next = NULL;
		(*h)->prev = NULL;
		free(*h);
		*h = temp;
	}	
	if (*h == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", nl);
		_retexfail();
	}	
}
