N, K = map(int, input().split())

result = 0
while True:
    close = (N // K) * K
    result += (N - close)
    N = close
    if N < K:
        break
    result += 1
    N = N // K

result += (N-1)
print(result)