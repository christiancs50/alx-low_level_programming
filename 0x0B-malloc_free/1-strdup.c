#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptStr;
	int count, r = 0;

	if (str == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0'){
		count++;
	}

	ptStr = malloc(sizeof(char) * (count + 1));

	if (ptStr == NULL){
		return (NULL);
	} 

	for (r = 0; str[r]; r++)
		ptStr[r] = str[r];

	return (ptStr);
}
