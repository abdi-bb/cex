'''#!/usr/bin/python3'''
def raise_exception():
    raise TypeError


'''main - to test our program'''
try:
    raise_exception()
except TypeError as te:
    print("Exception raised")


'''expected output
Exception raised
'''

