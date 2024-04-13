S = str(input())

li = []

for i in range(len(S)):
    li.append(S[i:])

li.sort()

for e in li:
    print(e)