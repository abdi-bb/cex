'''#!/usr/bin/python3'''
def safe_print_list(my_list=[], x=0):
    count = 0
    for i in range(x):
        try:
            print(f'{my_list[i]:d}', end='')
            count += 1
        except IndexError:
            pass
    print('')
    return count


'''main function for testing'''
my_list = [1, 2, 3, 4, 5]

nb_print = safe_print_list(my_list, 2)
print("nb_print: {:d}".format(nb_print))
nb_print = safe_print_list(my_list, len(my_list))
print("nb_print: {:d}".format(nb_print))
nb_print = safe_print_list(my_list, len(my_list) + 2)
print("nb_print: {:d}".format(nb_print))


'''expected output
12
nb_print: 2
12345
nb_print: 5
12345
nb_print: 5
'''
