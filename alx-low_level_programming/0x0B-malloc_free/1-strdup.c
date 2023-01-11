#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a copy of a given string.
 * @str: The string to be copied.
 *
 * Return: A pointer to the new string.
 */
char *_strdup(char *str)
{
	char *strc;
	int i, len = 0;
