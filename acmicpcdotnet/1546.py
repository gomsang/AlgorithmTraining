N = int(input())
lst = list(map(int, input().split()))
highscore = max(lst)
for i in range(len(lst)):
    lst[i] = lst[i] / highscore * 100

print(sum(lst) / len(lst))
