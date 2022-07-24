N, M = map(int, input().split())

allTimeHigh = 0

for _ in range(N):
    numbers = list(map(int, input().split()))
    allTimeHigh = max(allTimeHigh, min(numbers))

print(allTimeHigh)