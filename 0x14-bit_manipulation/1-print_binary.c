#include "main.h"

/**
 ** powerfunc - func calculates (base ^ power)
 ** @base: the base of the exponent
 ** @power: the power of exponent
 ** Return: value of (base ^ power)
 **/
unsigned long int powerfunc(unsigned int base, unsigned int power)
{
unsigned long int number;
unsigned int count;
number = 1;
for (count = 1; count <= power; count++)
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
unsigned long int div, check;
char carac;
carac = 0;
div = powerfunc(2, sizeof(unsigned long int) * 8 - 1);
while (div != 0)
{
check = n & div;
if (check == div)
{
carac = 1;
_putchar('1'); }
else if (carac == 1 || div == 1)
{
_putchar('0'); }
div >>= 1;
}
}
