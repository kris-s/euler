import math

x = str(math.factorial(100))
sum = 0

for char in x:
    sum += int(char)

print sum