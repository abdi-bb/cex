import re

pattern = re.compile(r"(^.*(?=.{8,})(?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%^&+=]).*$)")
while True:
    string = input('Enter your password: ')
    # secret = len(string) * #

    a = pattern.search(string)

    if not a:
        print('Please, enter a valid password')
    if not string[-1].isdigit():
        print('Last digit must be number')
    else:
        print(f'Your password {string} is valid')
        break