#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read and print a text file to STDOUT.
 *
 * @filename: Name of the file to read.
 * @max_bytes: Maximum number of bytes to read.
 *
 * Return: Number of bytes read and printed to STDOUT, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t max_bytes)
{
	char *buffer = NULL;
	ssize_t fd, bytes_read, bytes_written;
	ssize_t total_bytes_written = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (-1);

	buffer = malloc(max_bytes);
	if (buffer == NULL)
	return (-1);

	bytes_read = read(fd, buffer, max_bytes);
	if (bytes_read == -1)
	goto cleanup;

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	goto cleanup;

	total_bytes_written = bytes_written;

cleanup:
	free(buffer);
	close(fd);
	return (total_bytes_written);
}
