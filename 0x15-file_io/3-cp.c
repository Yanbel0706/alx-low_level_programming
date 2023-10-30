#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** file_close - to close file descriptors.
 ** @fp: The file descriptor to close.
 **/
void file_close(int fr)
{
int v = close(fr);
if (v == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
exit(100);
}
}
/**
 ** main - to Copie the content of a file to another.
 ** @argc: The number of arguments supplied to the program.
 ** @argv: An array of pointers to the arguments.
 ** Return: 0 for success
 **/
int main(int argc, char *argv[])
{
int w, r, d, f;
char *buffer;
if (argc != 3)
{
  dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
  exit(97);
}
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
  exit(99);
}
f = open(argv[1], O_RDONLY);
r = read(f, buffer, 1024);
d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do
{
if (d == -1 || w == -1)
{
  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
  free(buffer);
  exit(99);
}
r = read(f, buffer, 1024);
d = open(argv[2], O_WRONLY | O_APPEND);
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(d, buffer, r);
} while (r > 0);
free(buffer);
file_close(f);
file_close(d);
return (0);
}

