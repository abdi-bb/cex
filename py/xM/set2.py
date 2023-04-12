my_set = {1,2,3,4,5}
your_set = {4,5,6,7,8,9,10}
print(my_set.difference(your_set))
# output: {1, 2, 3}
my_set.discard(5)
print(my_set)
# output: {1, 2, 3, 4}
my_set.difference_update(your_set)
print(my_set)
# output: {1, 2, 3}
my_set = {1,2,3,4,5}
print(my_set.intersection(your_set))
print(my_set & your_set)
# output: {4, 5}
print(my_set.isdisjoint(your_set))
# output: False, True if you remove 4 and 5 from one of the sets
print(my_set.union(your_set))
print(my_set | your_set)
# output: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

print(my_set.issubset(your_set))
# output: False, True if my_set = {4,5}
print(my_set.issuperset(your_set))
# output: False, you can get True if you make my_set = {4,5} and run print(your_set.issuperset(my_set)) (superset is when one contains the other memebers in it.)