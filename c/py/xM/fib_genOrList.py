# Fibonacci using generators
def gen_fib(num):
    a = 0
    b = 1
    for i in range(num):
        yield a
        tmp = a
        a = b
        b = tmp + b
    
for i in gen_fib(21):
    print(i, end=', ')

print()
print()

# Fib using list
def lis_fib(num):
    a = 0
    b = 1
    lis = []
    for i in range(num):
        lis.append(a)
        tmp = a
        a = b
        b = tmp + b
    return lis

fib = lis_fib(21)
print(fib)

abjuu + 5