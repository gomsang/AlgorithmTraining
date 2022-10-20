str = input()
x = int(ord(str[0])) - int(ord('a')) + 1
y = int(str[1])

steps = [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2)]

available = 0

for step in steps:
    temp_x = x + step[0]
    temp_y = y + step[1]

    if (1 <= temp_x <= 8) and (1 <= temp_y <= 8): available += 1

print(available)
