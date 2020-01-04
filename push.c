#include "monty.h"
/**
 * _push - function to push element
 * @h: stack
 * @amount: value
 * Return: stack
 */
stack_t *_push(stack_t **h, char **amount)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		printf("No se asigno memoria");

	new->n = atoi(*amount);
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	else
	{
		(*h)->next = new;
		new->prev = *h;
		*h = new;
		return (*h);
	}
}
