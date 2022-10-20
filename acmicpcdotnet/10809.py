str = input()

for i in range(26):
    print(str.find(chr(ord('a') + i)), end=' ')