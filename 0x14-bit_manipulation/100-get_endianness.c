#include "main.h"
/**
 ** get_endianness - prog checks the endianness
 ** Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
int num;
char *carac;
num = 1;
carac = (char *)&num;
return (*carac);
}
