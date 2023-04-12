def generator_func(num):
    for i in range(num):
        yield i


for item in generator_func(10):
    print(item)
g = generator_func(10)
print(g)
next(g)
next(g)
next(g)
print(next(g))