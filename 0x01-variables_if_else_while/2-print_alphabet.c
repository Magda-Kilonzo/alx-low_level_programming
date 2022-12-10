#include <stdio.h>

/**
 * main - main block
 * Desription: Use `putchar` function to print the alphabet in lowecase
 *
 * REturn: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;

	}
	putchar('\n');

	return (0);
}
