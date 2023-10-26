#include"main.h"

/**
 *  * get_bit - program returning the value of a bit at a given index.
 *   * @n: number to check the bit 
 *    * @index: index to check  bit
 *     *
 *      * Return: value of the bit, or if get error return -1
 *       */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int diviseur, chk;
   if (index > (sizeof(unsigned long int) * 8 - 1))
	    return (-1);
   diviseur = 1 << index;
   chk = n & diviseur;
   if (chk == diviseur)
	    return (1);
   return (0);
}
