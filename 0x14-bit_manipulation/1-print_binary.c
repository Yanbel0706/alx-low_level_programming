#include "main.h"
/**
 ** _pow - func calculates (base ^ power)
 ** @base: base of the exponent
 ** @power: power of the exponent
 ** Return: value of (base ^ power)
 **/
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int number;
unsigned int c;
number = 1;
for (c = 1; c <= power; c++)
  number *= base;
  return (number);
}
/**
 ** print_binary - prints a number in binary notation
 ** @n: number to print
 ** Return: void
 **/
void print_binary(unsigned long int n)
{
unsigned long int diviseur, chk;
char flg;
flg = 0;
diviseur = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (diviseur != 0)
    {
	chk = n & diviseur;										    if (chk == diviseur)
	{	flg = 1;
		_putchar('1');}
													    else if (flg == 1 || diviseur == 1)
									    				    {
														    _putchar('0'); 								
	    diviseur >>= 1;    	
													    }    
    }
}
