N, M, K = map(int, input().split())
numbers = list(map(int, input().split()))
# sort (오름차)
numbers.sort()

# current sum count
totalSumCount = 0
# 총계
sumValue = 0

stbignumber = numbers[N - 1]
ndbignumber = numbers[N - 2]
while totalSumCount < M:
    remainSumCount = K
    while remainSumCount > 0 and totalSumCount < M:
        sumValue += stbignumber
        totalSumCount += 1
        remainSumCount -= 1
    if totalSumCount < M:
        sumValue += ndbignumber
        totalSumCount += 1

print(sumValue)