li = [4, 5, 7, 1, 3, 2]
i = len(li) - 1
while i > 1:
    j = 0
    while j < i:
        print(f'\nIs {li[j]} > {li[j + 1]}')
        if li[j] > li[j + 1]:
            print('Yes! then Swap')
            tmp = li[j]
            li[j] = li[j + 1]
            li[j + 1] = tmp
        else:
            print('No! Don\'t swap')
        j += 1
        for k in li:
            print(k, end=', ')
    print('End of round')
    i -= 1
for k in li:
    print(k, end=', ')