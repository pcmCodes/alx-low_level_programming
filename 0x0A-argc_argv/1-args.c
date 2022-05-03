#include <stdio.h>

/**
 * main - printing the number of arguments passed into the program
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: number of arguments passed
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 2);
	return (1);
}

