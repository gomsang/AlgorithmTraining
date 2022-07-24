N = int(input())
paths = input().split()

X, Y = 1, 1
for direction in paths:
    if direction == 'L' and X > 1:
        X -= 1
    elif direction == 'R' and X < N:
        X += 1
    elif direction == 'U' and Y > 1:
        Y -= 1
    elif direction == 'D' and Y < N:
        Y += 1

print(Y, X)