#include <stdio.h>

/**
 * main - maoin block
 * Description: Print the alphabet on a line omitting e and q
 * usin putchar only twice
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;

		if (alpha == 'e' || alpha == 'q')
			alpha++;
	}
	putchar('\n');

	return (0);
}
