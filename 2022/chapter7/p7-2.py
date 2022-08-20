def search(array, keyword, start, end):
    while True:
        center = (start + end) // 2
        if array[center] == keyword: return center
        if start >= end:
            return None
        elif array[center] > keyword:
            end = center - 1
        elif array[center] < keyword:
            start = center + 1


N = int(input())
array = list(map(int, input().split()))
M = int(input())
keywords = list(map(int, input().split()))

for k in keywords:
    ans = search(array, k, 0, len(array) - 1)
    if ans is None:
        print("no", end=' ')
    else:
        print("yes", end=' ')
