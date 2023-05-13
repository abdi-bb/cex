#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    int i, j;

    int size = sizeof(list) / sizeof(list[0]);

    for (i = 1; i < size; i++)
    {
        for (j = 1; j < size; j++)
        {
            int k = j;

            while (list[k] < list[k + 1] && k > 0)
            {
                listint_t *tmp;

                tmp = list[k];
                list[k] = list[k + 1];
                list[k + 1] = tmp;
                k -= 1;
                print_list(list);
            }
            
        }
    }
}

/*
#!/usr/bin/python3


def insertion(array):
    for i in range(1, len(array)):
        j = i
        while array[j] < array[j - 1] and j > 0:
            array[j], array[j - 1] = array[j - 1], array[j]
            j -= 1
    return array


if __name__ == '__main__':
    insertion(array)
*/