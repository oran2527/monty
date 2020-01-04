#include "monty.h"
/**
 * main - principal function
 * @argc: amount arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	/*
	size_t line = 0;
	ssize_t m;
	unsigned int nl = 1;
	char *linestr, *operator, *amount;
	FILE *file;
	stack_t *h = NULL, *new, *temp;
	*/
	char arg1;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	else
	{
		strcpy(arg1, *argv[1]);
		_read(arg1);
		/*
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
				else
				{
					h->next = new;
					new->prev = h;
					h = new;
				}
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
		*/
	}
	return (EXIT_SUCCESS);
}
