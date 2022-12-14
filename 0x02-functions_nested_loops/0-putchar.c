#include <unistd.h>

/**
 * _putchar - writes the character x to stdout
 * @ x: The character to print
 * Return: On success 1
 * On error, -1 is returned and an error isset appropriately
 */

int _putchar (char x)
{
	return (write (1, &x, 1))
}
