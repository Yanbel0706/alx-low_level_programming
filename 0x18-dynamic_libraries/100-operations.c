#include <stdio.h>

/**
 ** add - Fonction qui effectue une addition.
 ** @a: Le premier operand.
 ** @b: Le deuxième operand.
 ** Return: Le résultat de l'addition.
 **/

int add (int a, int b)
{
	return (a + b);
}


/**
 ** sub - Fonction qui effectue une soustraction.
 ** @a: Le premier operand.
 ** @b: Le deuxième operand.
 ** Return: Le résultat de la soustraction.
 **/

int sub (int a, int b)
{
	return (a - b);
}


/**
 ** mul - Fonction qui effectue une multiplication.
 ** @a: Le premier operand.
 ** @b: Le deuxième operand.
 ** Return: Le résultat de la multiplication.
 **/

int mul (int a, int b)
{
	return (a * b);
}

/**
 ** div - Fonction qui effectue une division.
 ** @a: Le premier operand.
 ** @b: Le deuxième operand.
 ** Return: Le résultat de la division.
 **/

int div (int a, int b)
{
	if (b == 0) 
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 ** mod - Fonction qui effectue un modulo.
 ** @a: Le premier operand.
 ** @b: Le deuxième operand.
 ** Return: Le résultat du modulo.
 **/

int mod (int a, int b)
{
	if (b == 0)                                                                                             {                                                                                                               printf("Error: Division by zero\n");                                                                    return (0);
	}
	return (a % b);
}
