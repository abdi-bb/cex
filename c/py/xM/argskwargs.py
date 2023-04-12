# Rule: params, *args, default parameters, **kwargs
# function('name', 1,2,3, i = 'hi', num1=1, num2=3)

def add(*args, **kwargs):
  print(args, kwargs)
  total = 0
  for item in kwargs.values():
    total += item
  return sum(args) + total

print(add(1,2,3,4,5, num1=6,num2=4))
