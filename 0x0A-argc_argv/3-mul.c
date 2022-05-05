#include <stdlib.h>

/**
 * main - multipling two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: result of the multiplication, followed by a new line
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{

		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}