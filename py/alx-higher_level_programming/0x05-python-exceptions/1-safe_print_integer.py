'''#!/usr/bin/python3'''
def safe_print_integer(value):
    try:
        print(f'{value:d}')
        return True
    except ValueError:
        return False
    

'''main function - to test the program'''
value = 89
has_been_print = safe_print_integer(value)
if not has_been_print:
    print("{} is not an integer".format(value))

value = -89
has_been_print = safe_print_integer(value)
if not has_been_print:
    print("{} is not an integer".format(value))

value = "School"
has_been_print = safe_print_integer(value)
if not has_been_print:
    print("{} is not an integer".format(value))


'''Expected output
89
-89
School is not an integer
'''
