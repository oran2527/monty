#include "monty.h"
/**
 * _read - function to read file
 * @arg1: argument 1
 * Return: Nothing
 */
void _read(char *arg1)
{
	size_t line = 0;
	ssize_t m;
	unsigned int nl = 1;
	char *linestr, *operator, *amount, *argv1;
	FILE *file;
	stack_t *h = NULL, *temp;

	argv1 = strdup(arg1);

	file = fopen(argv1, "r");
	while ((m = getline(&linestr, &line, file)) != -1)
	{
		operator = strtok(linestr, " ");
		if (*operator == '\n')
		{
			nl++;
			continue;
		}
		amount = strtok(NULL, " \n");
		if (strcmp(operator, "push") == 0 && amount != NULL)
		{
			h = _push(&h, &amount);
		}
		else
		{
			temp = h;
			while (temp->prev != NULL)
			{
				printf("%d\n", temp->n);
				temp = temp->prev;
			}
			printf("%d\n", temp->n);
		}
		nl++;
	}
}
