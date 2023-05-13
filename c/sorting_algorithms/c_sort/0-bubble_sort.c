#include "sort.h"
/*
void bubble_sort(int *array, size_t size)
{
    int sorted = 0;
    int count = 0;

    while (!sorted)
    {
        size_t i, j;

        sorted = 1;

        for (i = 0; i < (size -1) - count; i++)
        {
            for (j = 0; j < (size - 1) - count; j++)
            {
                if (array[j] > array[j + 1])
                {
                    int tmp;
                    tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;
                    print_array(array, size);
                    sorted = 0;
                }
            }
        }
        count += 1;
    }
}
*/

void bubble_sort(int *array, size_t size)
{
	int sorted = 0;
	int count = 0;

	while(!sorted)
	{
		size_t i;

		sorted = 1;
		for (i = 0; i < (size - 1 - count); i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp;

				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				sorted = 0;
			}
		}
		count++;
	}
}
/*
def bubble(array):
	sorted = False
	count = 0


    while not sorted:
        sorted = True
        for i in range(len(array) - 1 - count):
            if array[i] > array[i + 1]:
                array[i], array[i + 1] = array[i + 1], array[i]
                sorted = False
	count += 1
    return array


if __name__ == '__main__':
    bubble(array)
*/
