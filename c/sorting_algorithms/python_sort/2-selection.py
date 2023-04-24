#!/usr/bin/python3


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
