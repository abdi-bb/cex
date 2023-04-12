# dict-unordered key-value pair
dictionary = {
  123: 1,
  'b': 2,
  True: 3,
  (1,2): 'o'
}
print(dictionary['b'])
# key must be immutable(can'tbe changed), list can't be a key. no [1]: 6, yes '1': 6,

# list-order of index

dict_list = [
  {
    'a': [5, 6, 7],
    'b': 'hello',
    'c': 7
  },
  {
    'x': [3, 4, 6],
    'y': 'best',
    'z': 6
  }
]
print(dict_list[1]['x'][2])