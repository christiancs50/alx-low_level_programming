#include "main.h"
int actual_sqrt_recursion(int n , int sq);

/**
 * _sqrt_recursion - function that returns the natural square root of a num
 * @n: integer
 * Return: -1 or result of square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find square root
 * @n: integer
 * @sq: integer
 * Return: Result or -1
 */

int actual_sqrt_recursion(int n , int sq)
{
	if (sq * sq > n)
	      return (-1);
	if (sq * sq == n)
		return (sq);
	return(actual_sqrt_recursion(n, sq + 1));
}	
