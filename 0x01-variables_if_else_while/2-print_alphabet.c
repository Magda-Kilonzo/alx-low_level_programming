#include <stdio.h>

/**
 * main - prints the alhabet in lowercase
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
