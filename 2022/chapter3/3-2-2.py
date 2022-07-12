N, M, K = map(int, input().split())
numbers = list(map(int, input().split()))
# sort (오름차)
numbers.sort()

stbignumber = numbers[N - 1]
ndbignumber = numbers[N - 2]

sumValue = stbignumber * (M - M % K) + ndbignumber * (M % K)

print(sumValue)
