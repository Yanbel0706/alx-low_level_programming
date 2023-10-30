#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The unsigned int representation of the binary number, or 0 if there's an error.
 */
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
