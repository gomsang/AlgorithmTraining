def cut(array, h):
    ct = 0
    for num in array:
        if num > h: ct += num - h
    return ct


N, M = list(map(int, input().split()))
array = list(map(int, input().split()))

start = 0
end = max(array)

while start <= end:
    mid = (start + end) // 2
    ans = cut(array, mid)
    if ans == M:
        print(mid)
        break
    elif ans > M:
        start = mid + 1
    elif ans < M:
        end = mid - 1

