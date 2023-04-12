# we can say it's immutable list only has two methods count() and index()
my_tuple = (1, 2, 3, 4, 5)
# my_tuple[0] = 'no'
x,y,z, *other = my_tuple[:]
print(z)
print(other)
print(my_tuple.count(4))
print(len(my_tuple))
print(my_tuple.index(5))