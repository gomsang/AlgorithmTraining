N, M = map(int, input().split())

dt = [10001] * (M + 1)
dt[0] = 0

coins = []
for c in range(N):
    coin = int(input())

    coins.append(coin)

    if coin <= M:
        dt[coin] = 1

for i in range(coins[N - 1] + 1, M + 1):
    for coin in coins:
        if dt[i - coin] != 10001:
            dt[i] = min(dt[i - coin] + 1, dt[i])

print(dt[M] if dt[M] != 10001 else -1)
