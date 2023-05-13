#include "sort.h"

/*
void selection_sort(int *array, size_t size)
{
    size_t i, j, k, m;

    for (k = 0; k < size; k++)
    {
        for (i = 0; i < size; i++)
        {
            int smallestValue = array[i];
            int smallestIdx = i;
            for (m = 0; m < i + 1; m++)
            {
                for (j = i + 1; j < size; j++)
                {
                    if (array[j] < smallestValue)
                    {
                        smallestValue = array[j];
                        smallestIdx = j;
                    }
                }
            }
        }
    
        int tmp;
        tmp = array[k];
        array[k] = array[smallestIdx];
        array[smallestIdx] = array[k];
        print_array(array, size);
    }
}
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		int smallestValue = array[i];
		size_t smallestIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < smallestValue)
			{
				smallestValue = array[j];
				smallestIndex = j;
			}
		}
		tmp = array[i];
		array[i] = array[smallestIndex];
		array[smallestIndex] = tmp;
		print_array(array, size);
	}
}

/*

def selection(array):
    for i in range(len(array)):
        smallestValue = array[i]
        smallestIndex = i
        for j in range(i + 1, len(array)):
                if array[j] < smallestValue:
                    smallestValue = array[j]
                    smallestIndex = j
        array[i], array[smallestIndex] = array[smallestIndex], array[i]
    return array



if __name__ == '__main__':
    selection(array)
*/
