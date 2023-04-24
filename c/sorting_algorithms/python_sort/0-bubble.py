#!/usr/bin/python3


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