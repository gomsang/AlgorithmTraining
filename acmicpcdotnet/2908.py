def sangsu(va):
    return (va // 100) + (va % 100 // 10) * 10 + (va % 100 % 10) * 100


a, b = map(int, input().split())
a, b = sangsu(a), sangsu(b)
print(max(a, b))
