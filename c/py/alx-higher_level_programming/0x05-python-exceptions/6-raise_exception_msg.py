'''#!/usr/bin/python3'''
def raise_exception_msg(message=""):
    raise NameError(message)


'''main to test our program'''
try:
    raise_exception_msg("C is fun")
except NameError as ne:
    print(ne)



'''expected output
C is fun
'''