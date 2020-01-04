#include "monty.h"
/**
 * _pop - function to delet the top element of the stack
 * @h: stack
 * @nl: line from the file
 */
void _pop(stack_t **h, unsigned int nl)
{
	stack_t *temp = *h;
	(void)nl;

	if (*h != NULL)
	{
		*h = temp->next;
		if (temp->next)
			temp->next->prev = NULL;

		free(temp);
	}
	else
	{
		printf("L%u: can't pop an empty stack\n", nl);
		_retexfail();
	}
}
