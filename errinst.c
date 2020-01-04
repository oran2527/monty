#include "monty.h"
/**
 * _errinst - print instruction error
 * Description: print instruction error when the instruction is not recognized
 * @nl: line from the file
 * @oper: operator
 * Return: 0
 */
int _errinst(unsigned int nl, char *oper)
{
	printf("L%u: unknown instruction %s\n", nl, oper);
	_retexfail();
	return (0);
}
