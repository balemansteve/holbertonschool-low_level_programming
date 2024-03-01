#include "main.h"

/**
 * main - multiplies two numbers.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 1 error, 0 passed.
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, resul:t;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
