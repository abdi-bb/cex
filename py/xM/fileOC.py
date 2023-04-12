#!/usr/bin/python3
my_file = open('file.txt')
print(my_file.read())
print(my_file.read())

my_file.close()

with open('file.txt') as my_file:
    print(my_file.read())

with open('happy.txt', mode='w') as mi_file:
    mi_file.write('I am Abdi')
    

with open('happy.txt') as mi_file:
    print(mi_file.read())

try:
    with open('sad.txt') as enemy_file:
        print(enemy_file)
except FileNotFoundError as err:
    print('file doesn\'t exist')
    print(err)
