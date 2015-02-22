# ill be using python for problems that require big numbers
x = 2 ** 1000

def sum_digits(num):
    total = 0
    while num != 0:
        total += num % 10
        num = (num - (num % 10)) / 10
    return total

print(sum_digits(x))
