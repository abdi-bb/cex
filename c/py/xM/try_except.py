def sum(num1, num2):
    try:
        return num1 + num2
    except TypeError as e:
        print(f'Enter numbers {e}')

addition = sum(2, '3')
print(addition)
