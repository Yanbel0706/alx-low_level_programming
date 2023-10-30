#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fr);

/**
 ** creates_buffer - Allocates 1024 bytes for a buffer.
 ** @file: The name of the file buffer is storing chars for.
 ** Return: A pointer to the newly-allocated buffer.
 **/
char *creates_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
 ** close_file - Closes file descriptors.
 ** @fr: The file descriptor to be closed.
 **/
void close_file(int fr)
{
int x;
x = close(fr);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
exit(100);
}
}
/**
 ** main - Copies the contents of a file to another.
 ** @argc: The number of arguments supplied in the program.
 ** @argv: An array of pointers to the arguments.
 ** Return: 0 on success.
 ** If the argument count is incorrect - exit with code 97.
 ** If file_from  not exist or cannot be read - exit with code 98.
 ** If file_to cannot be created or write into - exit with code 99.
 ** If file_to or file_from cannot be closed - exit with code 100.
 **/
int main(int argc, char *argv[])
{
int f, t, r, w;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = creates_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buff, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
w = write(t, buff, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
r = read(f, buff, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buff);
close_file(f);
close_file(t);
return (0);
}


