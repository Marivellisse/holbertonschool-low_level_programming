#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

void close_fd(int fd);
void check_rw_error(int status, int fd_from, int fd_to,
		    const char *msg, const char *arg, int code);

/**
 * error_exit - Prints an error message and exits.
 * @msg: Message format.
 * @arg: Argument to print.
 * @code: Exit code.
 */
void error_exit(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * copy_file - Copies content from one file to another.
 * @src: Source file name.
 * @dest: Destination file name.
 */
void copy_file(const char *src, const char *dest)
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	fd_from = open(src, O_

