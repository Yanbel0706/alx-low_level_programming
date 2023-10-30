#include "main.h"

/**
 ** append_text_to_file - a function appending text
 ** at the end of a file.
 ** @filename: the name of the file.
 ** @text_content: the string to adding in end of the file.
 ** Return: 1 on succes, or -1 on failure..
 **/
int append_text_to_file(const char *filename, char *text_content)
{
int fr, w, len;
if (filename == NULL)
{
   return (-1);
}
if (text_content == NULL)
{
   fr = open(filename, O_WRONLY | O_APPEND);
     if (fr == -1)
	{
          return (-1);
	}
   return (1);
}
len = 0;
while (text_content[len] != '\0')
{
len++;
}
fr = open(filename, O_WRONLY | O_APPEND);
w = write(fr, text_content, len);
if (fr == -1 || w == -1)
{
return (-1);
}
close(fr);
return (1);
}
