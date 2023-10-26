#include "main.h"
/*
*binary_to_uint - program which convert a binary number to an unsigned int
**@b: pointer to a string which contains a binary number
**Return: unsigned int with decimal value r or to 0 if error
**/
unsigned int binary_to_uint(const char *b)
{
int c;
unsigned int number;
number = 0;
if (!b)
return (0);
for (c = 0; b[c] != '\0'; c++)
{
if (b[c] != '0' && b[c] != '1')
return (0);
}
for (c = 0; b[c] != '\0'; c++)
{
	number <<= 1;
if (b[c] == '1')
number += 1; }
return (number);
}
