from collections import deque

N, M = map(int, input().split())

graph = []

for i in range(N):
    graph.append(list(map(int, input())))


def bfs(startx, starty):
    queue = deque([(startx, starty)])

    while queue:
        x, y = queue.popleft()

        for (tx, ty) in [(x + 1, y), (x - 1, y), (x, y - 1), (x, y + 1)]:
            if ty < 0 or tx < 0 or ty >= N or tx >= M:
                continue
            if graph[tx][ty] == 0: continue
            if graph[tx][ty] == 1:
                graph[tx][ty] = graph[x][y] + 1
                queue.append((tx, ty))

    return graph[N - 1][M - 1]


print(bfs(0, 0))
