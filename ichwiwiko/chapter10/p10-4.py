from collections import deque
from copy import deepcopy

N = int(input())
indegree = [0] * (N + 1)

graph = [[] for i in range(N + 1)]

cost = [0] * (N + 1)

for i in range(1, N + 1):
    inputs = list(map(int, input().split()))
    cost[i] = inputs[0]

    for x in inputs[1:-1]:
        indegree[i] += 1
        graph[x].append(i)

q = deque()
rcost = deepcopy(cost)

for i in range(1, N + 1):
    if indegree[i] == 0:
        q.append(i)

while q:
    now = q.popleft()
    for ig in graph[now]:
        rcost[ig] = max(rcost[ig], rcost[now] + cost[ig])
        indegree[ig] -= 1
        if indegree[ig] == 0:
            q.append(ig)

print(rcost)
for i in range(1, N+1):
    print(rcost[i])