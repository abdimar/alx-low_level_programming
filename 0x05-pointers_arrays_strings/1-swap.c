#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @: int a
 * @: int b
 * Return: void
 *
 */

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

