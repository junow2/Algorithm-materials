words = list(map(str, input()))
zero = [-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]
num = list(range(97, 123))
count = 0
for i in words:
    for j in num:
        if ord(i) == j :
            if zero[j-97] > -1:
                count += 1
            else :
                zero[j-97] = count
                count += 1
print(*zero) 