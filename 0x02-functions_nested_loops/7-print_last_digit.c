#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: The value to print the last digit
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}
