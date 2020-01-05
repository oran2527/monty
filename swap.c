#include "monty.h"
/**
 * _s - function to swap the first two values of the stack
 * @h: stack
 * @nl: line from the file
 */
void _s(stack_t **h, unsigned int nl)
{
	int i = 0;
	
	(void)nl;

	while(*h != NULL)
	{
		*h = (*h)->prev;
		i++;
	}
	printf("swap %d\n", i); 
	/*
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
	*/
}
