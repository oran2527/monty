#include "monty.h"
/**
 * main - principal function
 * @argc: amount arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	size_t line = 0;
	ssize_t m;
	unsigned int nl = 1;
	char *linestr, *operator, *amount;
	FILE *file;
	stack_t *h = NULL;
	
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	else
	{
		file = fopen(argv[1], "r");
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
				
				stack_t *new;

				new = malloc(sizeof(stack_t));

				if (new == NULL)
					printf("No se asigno memoria");

				new->n = atoi(amount);
				new->prev = NULL;
				new->next = NULL;

				if (h == NULL)
				{
					h = new;				
				}

				h->next = new;
				new->prev = h;
				h = new;					

			}
			else
			{	
				_func(&h, operator, nl);
			}	
			nl++;
		}
	}
	return (EXIT_SUCCESS);		
}
