A = int(input())
B = int(input())
C = int(input())

cnt = [0] * 10
str = str(A * B * C)

for ch in str:
    cnt[int(ch)] = cnt[int(ch)] + 1

for c in cnt:
    print(c)