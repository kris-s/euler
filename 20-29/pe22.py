import names

sorted_list = sorted(names.n)
res = 0

def get_score(pos, name):
    name_val = 0

    for char in name:
        name_val += (ord(char) - 64)

    return name_val * (pos + 1)

for i in range(len(sorted_list)):
    res += get_score(i, sorted_list[i])

print res