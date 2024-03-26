S = str(input())
Arr = S.split('-')
V = []

for a in Arr:
    tmp = 0
    for n in a.split('+'): 
        tmp += int(n) 
    V.append(tmp)

ans = V[0]
for i in V[1:]:
    ans -= i
print(ans)