def quick(array):
    quickHelper(array, 0, len(array) - 1)
    return array


def quickHelper(array, start, end):
    pivot = start
    left = start + 1
    right = end
    while left < right:
        if array[left] > array[pivot] and array[right] < array[pivot]:
            array[left], array[right] = array[right], array[left]
        if array[left] <= array[pivot]:
            left += 1
        if array[right] >= array[pivot]:
            right -= 1
    array[right], array[pivot] = array[pivot], array[right]
    
    smallestLeftSubarray = (right - 1) - start < end - (right + 1)
    if smallestLeftSubarray:
        quickHelper(array, start, right - 1)
        quickHelper(array, right + 1, end)
    else:
        quickHelper(array, right + 1, end)
        quickHelper(array, start, right - 1)
    return array