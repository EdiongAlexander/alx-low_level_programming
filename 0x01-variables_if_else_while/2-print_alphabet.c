#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
