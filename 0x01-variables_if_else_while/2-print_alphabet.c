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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);

	}
	putchar("\n");
}
