'''#!/usr/bin/python3'''
import sys
def safe_print_integer_err(value):
    try:
        print(f'{value:d}')
    except Exception as err:
        print('Exception:', err, file=sys.stderr)
        return False
    return True
    
    

'''main - to test our program'''
value = 89
has_been_print = safe_print_integer_err(value)
if not has_been_print:
    print("{} is not an integer".format(value))

value = -89
has_been_print = safe_print_integer_err(value)
if not has_been_print:
    print("{} is not an integer".format(value))

value = "School"
has_been_print = safe_print_integer_err(value)
if not has_been_print:
    print("{} is not an integer".format(value))


'''Expected output
89
-89
Exception: Unknown format code 'd' for object of type 'str'
School is not an integer

option
89
-89
School is not an integer
'''