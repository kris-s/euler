LENGTH_TARGET = 1000

searching = True
fib_obj = [1, 1, 2]

def fib(fib_obj):
    a = fib_obj[0]
    b = fib_obj[1]
    fib_obj[0] = b
    fib_obj[1] = a + b
    fib_obj[2] += 1

    return fib_obj

while(searching):
    if len(str(fib_obj[1])) < LENGTH_TARGET:
        fib_obj = fib(fib_obj)
    else:
        searching = False
        print fib_obj
