N = int(input())

for i in range(N):
    cnt, str = tuple(input().split())
    for i in str:
        for j in range(int(cnt)):
            print(i, end='')
    print()