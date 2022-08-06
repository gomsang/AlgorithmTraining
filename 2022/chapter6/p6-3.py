n = int(input())

array = []

for i in range(n):
    value = input().split()
    array.append((value[0], int(value[1])))


def setting(v):
    return v[1]


array = sorted(array, key=setting)

for i in array:
    print(i[0], end=' ')
