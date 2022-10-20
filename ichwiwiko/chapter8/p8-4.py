N = int(input())

dt = [0] * 1001

dt[1] = 1
dt[2] = 3

for i in range(3, N + 1):
    dt[i] = (dt[i - 1] + 2 * dt[i - 2]) % 796796

print(dt[N])
