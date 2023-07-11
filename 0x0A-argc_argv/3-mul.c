#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Error or 1
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
