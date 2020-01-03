#include "monty.h"
/**
 * _func - functions
 * @h: head
 * @operator: operator
 * @nl: line from a file
 */
void _func(stack_t **h, char *operator, unsigned int nl)
{
	char *final_op;
	int j;
	instruction_t inst[] = {
		{"pall", _pall},
		{NULL, NULL}
	};

	final_op = strtok(operator, " \n");
	for (j = 0; inst[j].opcode; j++)
	{
		if (strcmp(final_op, inst[j].opcode) == 0)
		{
			inst[j].f(h, nl);
			return;
		}
	}
}
