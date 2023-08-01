#include "monty.h"

/**
 * main - main function
 * @ac: argument count
 * @av: argument vector
 * Return: 0 (success)
 */

int main(int ac, char *av[])
{
	FILE *fp;
	char *buf = NULL;
	size_t count = 0, size = 0;
	stack_t *head = NULL;
	ssize_t read;

	if (ac != 2)
	{
		write(STDERR, "USAGE: monty file\n", 19);
		exit(EXIT_FAILURE);
	}

	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		write(STDERR, "Error: Can't open file", 22);
		write(STDERR, av[1], strlen(av[1]));
		exit(EXIT_FAILURE);
	}

	while (read = getline(&buf, &size, fp) != EOF)
	{
		++count;
		readfile(buf, count, head);
	}
		free(buf);
		exit(EXIT_SUCCESS);
}

/**
 */

void readfile(char *buff, size_t count, stack_t *stack)
{
	char *bytecode[];
	char *token;
	size_t i = 0;

	token = strtok(buff, DELIM);
	while (toke != NULL)
	{
		bytecode[i] = token;
		++i;
		token = strtok(NULL, DELIM);
	}
	if (bytecode[0] == "push")
	{
		
}
