#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes In an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int In = n % 10;

	if (n < 0)
		In = In * -1;
	_putchar(In + '0');
	return (In);
}
