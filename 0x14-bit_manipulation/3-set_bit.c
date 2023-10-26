#include "main.h"

/**
 *  * set_bit - program to set the value of a bit to 1 at  given index.
 *   * @n: number to set
 *    * @index: index  to set bit
 *     *
 *      * Return: 1 if success, or -1 if an error was in
 *       */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitset;
   if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
   bitset = 1 << index;
   *n = *n | bitset;
   return (1);
}
