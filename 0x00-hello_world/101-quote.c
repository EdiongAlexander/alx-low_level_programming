#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Return: Always returns EXIT_FAILURE (1)
 */
int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	size_t message_length = sizeof(message) - 1;

	ssize_t bytes_written;

	bytes_written = write(STDERR_FILENO, message, message_length);

	if (bytes_written != (ssize_t)message_length)
		return (EXIT_FAILURE);

	return (EXIT_FAILURE);
}
