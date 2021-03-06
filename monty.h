#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _read(char *arg1);
stack_t *_push(stack_t **h, char **amount, unsigned int nl);
void _pall(stack_t **h, unsigned int nl);
int _retexfail(void);
int _errfile(char *argv1);
int _errinst(unsigned int nl, char *oper);
void _pint(stack_t **h, unsigned int nl);
void _free(stack_t **h, char **linestr, char **amount, char **argv1, FILE **file);
void _pop(stack_t **h, unsigned int nl);
void _s(stack_t **h, unsigned int nl);
void _a(stack_t **h, unsigned int nl);
void _n(stack_t **h, unsigned int nl);

#endif
