#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 * This program prints the alphabets in lowercase except for letters 'q' and 'e'
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
