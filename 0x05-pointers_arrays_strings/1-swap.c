#include "main.h"

/**
 * swap_int - Swas values of two integers
 *
 *
 * @a: integer to swap
 * @b: the other integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

