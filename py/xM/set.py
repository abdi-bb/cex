# an ordered collection of unique values/no duplicate value, we can't access values using index

my_set = {1, 2, 3, 4, 5, 5}
# my_set.add(2) -already exists
# print(my_set[0])

my_set.add(100)

print(my_set)
print(4 in my_set)
print(len(my_set))
print(list(my_set))
copy_set = my_set.copy()
my_set.clear()
print(my_set)
print(copy_set)


# Q. eliminate duplicate from this list
my_list = [1,2,3,4,5,5]

# A. solution
print(set(my_list))