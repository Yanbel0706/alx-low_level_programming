#include "main.h"

/**
 ** create_file - a function to create a file.
 ** @filename: A pointer to the name of the created file.
 ** @text_content: A pointer to write.
 ** Return: 1 for success or -1 for failure..
 **/
int create_file(const char *filename, char *text_content)
{
int fr, len, w;
if (filename == NULL)
{
   return (-1);
}
if (text_content == NULL)
{
   fr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
   return (1);
}
len = 0;
while (text_content[len] != '\0')
{
   len++;
}
fr = open(filename, O_WRONLY | O_TRUNC);
if (fr == -1)
{
   fr = open(filename, O_CREAT | O_WRONLY, 0600);
}
w = write(fr, text_content, len);
if (w == -1 || fr == -1 )
{
   return (-1);
}
close(fr);
return (1);
}
