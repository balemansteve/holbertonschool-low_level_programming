#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of
 * integers.
 * @a: array.
 * @n: numbers of elements.
 */
void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
	printf("%d, ", a[inc]);
else
	printf("%d", a[inc]);
}
printf("\n");
}
