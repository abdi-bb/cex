from time import time
from performance import performance
# def performance(func):
    # def wrapper(*args, **kwargs):
        # t1 = time()
        # result = func(*args, **kwargs)
        # t2 = time()
        # print(f'took {t2 - t1} seconds')
        # return result
    # return wrapper

@performance
def long_time():
    print('1')
    for i in range(1000000):
        i*5

@performance
def long_time2():
    print('2')
    for i in list(range(1000000)):
        i*5

long_time()
long_time2()
