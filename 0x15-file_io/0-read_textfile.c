#include "main.h"
#include <stdlib.h>

/**
 ** read_textfile - a function to read a text file and print it to the POSIX standard output.
 ** @filename: the pathname of the text file to read.
 ** @letters: number of letters to read
 ** Return:-w- actual number of bytes read and printed
 ** 0 when function fails or filename is NULL.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
   char *buff;
   ssize_t fr, w, r, s;
   s = letters * sizeof(char);
   fr = open(filename, O_RDONLY);
   if (fr == -1)
{
      return (0);
}
   buffer = malloc(s);
   r = read(fr, buff, s);
   w = write(STDOUT_FILENO, buff, r);

   free(buff);
   close(fr);
   return (w);
}
