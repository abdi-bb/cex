'''#!/usr/bin/python3'''
import sys
def safe_function(fct, *args):
    try:
        result = fct(*args)
    except Exception as error:
        print(f'Exception: {error}', file=sys.stderr)
        return None
    return result


'''main - to test our program'''
def my_div(a, b):
    return a / b

result = safe_function(my_div, 10, 2)
print("result of my_div: {}".format(result))

result = safe_function(my_div, 10, 0)
print("result of my_div: {}".format(result))


def print_list(my_list, len):
    i = 0
    while i < len:
        print(my_list[i])
        i += 1
    return len

result = safe_function(print_list, [1, 2, 3, 4], 10)
print("result of print_list: {}".format(result))


'''Expected output
result of my_div: 5.0
Exception: division by zero
result of my_div: None
1
2
3
4
Exception: list index out of range
result of print_list: None

2> dev/null
result of my_div: 5.0
result of my_div: None
1
2
3
4
result of print_list: None
'''