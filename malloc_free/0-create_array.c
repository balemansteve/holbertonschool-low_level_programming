#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @size: size of array
 * @c: specific char to initializate the array.
 * Return: pointer to the array, or NULL if it fail.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
