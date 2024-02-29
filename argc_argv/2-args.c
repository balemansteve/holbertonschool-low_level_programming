#include "main.h"

/**
 * main - print each argument of the program.
 *
 * @argv: array of strings.
 *
 * @argc: number of arguments passed to program.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
