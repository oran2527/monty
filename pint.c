#include "monty.h"
/**
 * _pint - function to show the value at the top of the stack
 * @h: stack
 * @nl: line from the file
 */
void _pint(stack_t **h, unsigned int nl)
{
	stack_t *temp;

	(void)nl;
	temp = *h;
	if (temp != NULL)
	{
		printf("%d\n", temp->n);
	}
	else
	{
		printf("L%u: can't pint, stack empty", nl);
		_retexfail();
	}
	free(temp);
}
