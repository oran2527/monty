#include "monty.h"
/**
 * _pall - function to show all the stack
 * @h: stack
 * @nl: line from the file
 */
void _pall(stack_t **h, unsigned int nl)
{
	stack_t *temp;
	int i = 0, j = 0;
	
	(void)nl;
	temp = *h;

	while (temp->prev != NULL)
	{		
		i++;
		temp = temp->prev;

	}
	i++;

	printf("valor i %d\n", i);
	while (temp->next != NULL)
	{
		j++;
		temp = temp->next;
	}
	j++;

	if (i > 1)
	{	
		while (temp->prev != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->prev;
		}
		printf("%d\n", temp->n);
	}
	if (i == 1)
	{
		printf("%d\n", temp->n);
	}
}
