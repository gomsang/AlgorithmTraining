str = input().upper()

wordcounts = [0] * 123

for s in str:
    wordcounts[ord(s)] = wordcounts[ord(s)] + 1

maxcnt = max(wordcounts)



if wordcounts.count(maxcnt) > 1:
    print("?")
else:
    print(chr(wordcounts.index(maxcnt)))