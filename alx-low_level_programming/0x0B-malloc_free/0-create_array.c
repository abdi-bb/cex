#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: Size of the array.
 * @c: Character for intializing the array.
 *
 * Return: Returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

