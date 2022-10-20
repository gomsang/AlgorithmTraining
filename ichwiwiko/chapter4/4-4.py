N, M = map(int, input().split())

# 오른손 좌표
x, y, direction = map(int, input().split())

SEA, RAND, VISITED = 1, 0, 2
MOVING_COMMAND = [(0, 1), (-1, 0), (0, -1), (1, 0)]

game = []
for i in range(N):
    game.append(list(map(int, input().split())))

moved = 0
scan = 0
while True:
    game[y][x] = VISITED

    # rotate direction
    direction = 3 if direction == 0 else direction - 1

    if game[y + MOVING_COMMAND[direction][1]][x + MOVING_COMMAND[direction][0]] is RAND:
        x, y = x + MOVING_COMMAND[direction][0], y + MOVING_COMMAND[direction][1]
        moved += 1
        scan = 0
        continue

    scan += 1
    if scan >= 4:
        scan = 0
        if game[y - MOVING_COMMAND[direction][1]][x - MOVING_COMMAND[direction][0]] is SEA:
            break
        else:
            x, y = x - MOVING_COMMAND[direction][0], y - MOVING_COMMAND[direction][1]
            moved += 1

print(moved)