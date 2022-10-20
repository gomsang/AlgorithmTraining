N = int(input())

for i in range(N):
    add = 0
    score = 0
    str = input()
    for ans in str:
        if ans == 'O':
            score = score + (1 + add)
            add += 1
        else:
            add = 0
    print(score)
